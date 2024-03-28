#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;

ll n;
ll a[N];
ll t[N];
ll f[N];

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll n;
    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        f[i] = 1;
        t[i] = 1;
    }
    for (long i=2; i<=n; i++){
        if (a[i-1] <= a[i])
            t[i] = t[i-1]+1; else
            t[i] = 1;
    }
    reverse(a+1,a+n+1);
     for (long i=1; i<=n; i++){
        if (a[i-1] <= a[i])
            f[i] = f[i-1]+1; else
            f[i] = 1;
    }
    reverse(t+1,t+n+1);
    ll maxx = 1;
    for (long i=1; i<=n; i++){
        maxx = max(maxx,t[i]+f[i]-1);
    }
    cout << maxx;
    return 0;
}
