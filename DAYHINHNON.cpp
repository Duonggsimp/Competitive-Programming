#include <bits/stdc++.h>
#define ll long long
#define fi first
#define _FILE "TEMP"
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;
ll n;
ll a[N],t[N],f[N]={};

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen(_FILE".inp","r",stdin);
    freopen(_FILE".out","w",stdout);
    #endif
  
    ll n;
    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }
    
    for (long i=1; i<=n; i++){
        f[i] = a[i];
        for (long j=1; j<i; j++)
            if (a[j] < a[i])
            f[i] = max(f[i],f[j]+a[i]);
    }
    
    reverse(a+1,a+n+1);
    for (long i=1; i<=n; i++){
        t[i] = a[i];
        for (long j=1; j<i; j++)
            if (a[j] < a[i])
            t[i] = max(t[i],t[j]+a[i]);
    }
    
    reverse(t+1,t+n+1);
    reverse(a+1,a+n+1);
    ll maxx = -1e18;
    for (long i=1; i<=n; i++){
        maxx = max(maxx,t[i]+f[i]-a[i]);
    }
    
    cout << maxx;
    return 0;
}
