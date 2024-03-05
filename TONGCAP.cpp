#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
ll n,k,h;
ll a[N],f[N];
ll l,maxx,res;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }
    f[0] =0;

    for (long i=1; i<=n; i++)
    f[i] = (f[i-1]+a[i])%mo;

    for (long i=1; i<=n; i++){
        res = (res + a[i]*f[i-1])%mo;
    }
    cout << res;
   return 0;;
}

