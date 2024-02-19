#include <bits/stdc++.h>
#define ll long long
#define fi first
#define _FILE "TEMP"
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
ll n;
ll a[N],t[N],b[N],f[N]={};

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll n;
    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        b[i] = 2e9;
    }

    for (long i=1; i<=n; i++){
        ll vt = lower_bound(b+1,b+n+1,a[i])-b;
        f[i] = vt;
        b[vt] = a[i];
    }
    for (long i=1; i<=n; i++)
       b[i] = 2e9;

    for (long i=n; i>=1; i--){
        ll vt = lower_bound(b+1,b+n+1,a[i])-b;
        t[i] = vt;
        b[vt] = a[i];
    }

    ll maxx = 1;
    for(long i=1; i<=n; i++)
       maxx= max(maxx,min(t[i],f[i])*2-1); 
    cout << maxx;
    return 0;
}
