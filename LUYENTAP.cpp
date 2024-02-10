#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;
const int maxn = 1003;
const ll mo = 1e9 + 7;
long n, m, s, k, d;
ll f[maxn][maxn];
char x;
bool cmp(pair<long, long> a, pair<long, long> b) {
    if (a.fi == b.fi)
        return a.se >= b.se;
    else
        return a.fi < b.fi;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    pair<long, long> a[n + 5];
    for (long i = 1; i <= n; i++) {
        cin >> a[i].fi >> a[i].se;
    }
    sort(a + 1, a + n + 1);
    for (long i = 1; i <= n; i++) {
        if (k >= a[i].fi) {
            k += a[i].se;
            d++;
        } else
            break;
    }
    cout << d;
    return 0;
}
