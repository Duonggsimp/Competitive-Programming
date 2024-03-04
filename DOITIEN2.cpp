#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
ll n,k;
ll a[N],f[N];
ll l,maxx,s;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }
    for(long i=1; i<=k; i++){
        f[i] = 1e9;
        for (long j=1; j<=n; j++)
            if (i >= a[j] && f[i-a[j]]!=-1)
            f[i] = min(f[i],f[i-a[j]]+1);
        if (f[i] == 1e9)
            f[i] = -1;
    }
    cout << f[k];
    return 0;
}
