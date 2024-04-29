#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6 + 5;
const int M = 1e3 + 5;
const ll mo = 1e9 + 7;

ll n,t,x;
ll sum;
ll a[N];
bool f[N];

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n;

    for (long i=1; i<=n; i++){
        cin >> a[i];
        sum += a[i];
    }

    f[0] = 1; 
    for (long i=1; i<=n; i++){
        for (long j=sum; j>=a[i]; j--){
            if (f[j] == 0 && f[j-a[i]] == 1){
                f[j] = 1;
            }
        }
    }

    cin >> t;
    while (t--){
        cin >> x;
        if (f[x] == 1) cout << "yes" << xn; else cout << "no" << xn;
    }

    return 0;
}
