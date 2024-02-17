#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;
ll f[N][N];
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    ll n,k;
    cin >> n >> k;
    ll a[n+5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] %= k;
    }
    f[0][0] = 0;
    for (long j=1; j<k; j++) f[0][j] = -mo;
    for (long i=1; i<=n; i++)
    {
        for (long j=0; j<k; j++)
        {
            f[i][j] = max(f[i-1][j], f[i-1][(j-a[i]+k)%k]+1);
        }
    }

    cout << f[n][0];
    return 0;
}
