#include <bits/stdc++.h>
#define ll long
#define fi first
#define se second
using namespace std;
const int maxn=1003;
const ll mo=1e9+7;
long n,m,s,k,d,l,r,res;
ll f[maxn][maxn];
ll mp[maxn];
char x;
long T(ll n){
long dem=0;
while (n!=0){
    dem+=n%10;
    n/=10;
}
return dem;
}
int main(){
      ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>l>>r;
    res=-1e9;

    for (long i=l;i<=r;i++){
        if (mp[T(i)]==0)
        mp[T(i)]=1e9;
        mp[T(i)]=min(mp[T(i)],i);
    res=max(res,i-mp[T(i)]);
    }
    cout<<res;
    return 0;
}
