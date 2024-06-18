#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const int M = 1e5+5;
const ll mo = 1e9;

ll n,m;
ll cnt;
ll res1,res2;
bool f[N];
vector <ll> a[N];

void dfs(ll x){
    cnt++;
    for (ll i : a[x])
    if (!f[i]){
        f[i] = 1;
        dfs(i);
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n >> m;
    for (long i=1; i<=m; i++){
        ll u,v; cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    f[1] = 1;
    dfs(1);
    res1 = cnt;
    res2 = 0;
    cnt = 0;
    for (long i=1; i<=n; i++){
        if (!f[i]){
            f[i] = 1;
            dfs(i);
            res2 = max(res2,cnt);
            cnt = 0;
        }
    }

    cout << res1 + res2;
    return 0;
}
