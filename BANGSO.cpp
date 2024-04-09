#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 2e6+5;
const ll mo = 1e9+7;

ll t,n,m,k;
ll a[N];
ll l,r;
ll res;
ll cnt;
bool kt;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> m >> n;
    kt = 0;
    for (long i=1; i<=n*m; i++){
        cin >> a[i];
    }

    sort(a+1,a+n*m+1);
    for (long i=1; i<=m; i++){
        if (!kt){
         for (long j=1; j<=n; j++) cout << a[cnt+j] << ' ';
            } else {
         for (long j=n; j>=1; j--) cout << a[cnt+j] << ' ';
        }
        cout << xn;
        cnt += n;
        kt = !kt;
    }
    return 0;
}
