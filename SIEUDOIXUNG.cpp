#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int maxn=1003;
const ll mo=1e9+7;
ll a[200], dem;
void DN(long i){
    if (i<=9){
        dem++;
        a[dem] = i;
   ll d=i;
   for (long j=1; j<=16; j++){
    d = d*10+i;
    dem++;
    a[dem] = d;
       }
    }
}
int main(){
    freopen ("dx.inp","r",stdin);
    freopen ("dx.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    for (long k=1; k<=9; k++){
        DN(k);
    }
    sort(a+1,a+dem+1);
    ll vt = lower_bound(a+1, a+dem+1, n)-a;
    if (a[vt] == n)
    cout << a[vt+1]-n; else
    cout << a[vt]-n;
    return 0;
}
