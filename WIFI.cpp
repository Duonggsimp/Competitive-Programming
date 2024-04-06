#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,k;
ll a[N];
ll res,vt;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }

    sort(a+1,a+n+1); 
    for (long i=1; i<=n; i++){
        res ++;
        vt = upper_bound(a+i+1,a+n+1,a[i]+k)-a; vt--;
        vt = upper_bound(a+vt+1,a+n+1,a[vt]+k)-a; vt--;
        i = vt;
    }

    cout << res;
    return 0;

}

