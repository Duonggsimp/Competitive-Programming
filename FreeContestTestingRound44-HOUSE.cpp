#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
#define pb push_back
using namespace std;
const int N = 1e6+5;
const int M = 1e3+5;
const ll mo = 1e9;

ll n,k;
ll res;
ll a[N];
ll maxx[N];
ll check[N];

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }

    for (long i=n; i>=1 ; i--)
    if (check[a[i]] == 0) check[a[i]] = i;

    for (long i=1; i<=n; i++){
        for (long j=1; j<=100; j++){
            if (check[j] > i) res = max(res,a[i]-j);
        }
    }

    if (res == 0) cout << "Lo nang roi!"; else cout << res ;
    return 0;
}

