#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
ll n,k;
ll a[N];
ll l,maxx,s;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }
    l = 1;
    maxx = 0;
    for (long i=1; i<=n; i++){
        s+=a[i];
        while (s>=k){
            maxx += n-i+1;
            s-=a[l];
            l++;
        }


    }
    cout << maxx;
    return 0;
}
