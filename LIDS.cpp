#include <bits/stdc++.h>
#define ll long long
#define fi first
#define _FILE "TEMP"
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n;
ll a[N]; 
ll b[N]; 
ll t[N]; 
ll f[N]; 

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++)  cin >> a[i];

    fill(b+1,b+n+1,2e9); 
    for (long i=1; i<=n; i++){
        ll vt = lower_bound(b+1,b+n+1,a[i])-b;
        f[i] = vt;
        b[vt] = a[i];
    }
    
    fill(b+1,b+n+1,2e9); 

    for (long i=n; i>=1; i--){
        ll vt = lower_bound(b+1,b+n+1,a[i])-b;
        t[i] = vt;
        b[vt] = a[i];
    }

    ll vt1 = *max_element(f+1,f+n+1);
    ll vt2 = *max_element(t+1,t+n+1);
    cout << n - max(vt1,vt2);
    return 0;
}
