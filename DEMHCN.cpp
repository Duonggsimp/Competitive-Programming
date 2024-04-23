#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,m;
ll l[N],h[N];
ll f[N], ans;
char s;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n >> m;
    for (long i=1; i<=n; i++){
        for (long j=1; j<=m; j++){
          cin >> s;
          if (s == '1') h[j]++; else h[j] = 0;
        }

    stack <ll> st;
    for (long j=1; j<=m; j++){
        while (!st.empty() && h[j] <= h[st.top()]) st.pop();
        if (st.empty()) l[j] = 1; else l[j] = st.top() + 1;
        st.push(j);
    }

    for (long j=1; j<=m; j++){
        ll k = l[j] - 1;
        f[j] = h[j] * (j-k) + f[k];
        ans += f[j];
        }
    }

    cout << ans;
    return 0;

}
