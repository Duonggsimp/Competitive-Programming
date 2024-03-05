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
ll l,maxx,s;


int main(){

    freopen("ORANGE.INP","r",stdin);
    freopen("ORANGE.OUT","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k >> h;
    ll d = (h*2)/k+1;

    a[0]= 0;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    for (long i=d; i<=n; i++){
        maxx = max(maxx, a[i]-a[i-d]);
    }
    
    if (maxx == 0)
    cout << a[n]; else 
    cout << maxx;
   return 0;;
}

