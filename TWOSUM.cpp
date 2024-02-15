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

    ll n,k;

    cin >> n >> k; 
    pair <ll,ll> a[n+5];
    for (long i=1; i<=n; i++){
        cin >> a[i].fi; 
        a[i].se = i; 
    }
  
    sort (a+1,a+n+1); 
    ll l=1, r=n; 
  
    while (l<=r){
        if (a[l].fi+a[r].fi == k){
            cout << a[l].se << ' ' << a[r].se; 
            return 0; 
        } else 
        if (a[l].fi+a[r].fi > k)
            r--; else 
        if (a[l].fi+a[r].fi < k)
        l++; 
    }
  
    cout << "IMPOSSIBLE"; 
    return 0;
}
