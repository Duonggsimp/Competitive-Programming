#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    ll n,k,s=0, x;
 
    cin >> n >> k;
    ll a[n+5] = {0};
 
    for (long i=1; i<=n; i++){
        cin >> x; 
        a[i] = a[i-1]; 
        if (x > 0)
        a[i] += x; 
    }
 
    ll l, r;
    for (long i=1; i<=k; i++){
       cin >> l >> r;
       cout << a[r] - a[l-1] << xn;
    }
    return 0;
}
 
