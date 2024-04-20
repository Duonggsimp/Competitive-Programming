#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e5+5;
const ll mo = 1e9+7;

ll n,k;
ll a[N];
bool f[N];

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }
    for (long i=1; i<=k; i++){
        for (long j=1; j<=n && !f[i]; j++){
            if (i >= a[j]) f[i] = !f[i-a[j]];
        }
    }

    if (f[k]) cout << "First"; else cout << "Second";
    return 0;
}
