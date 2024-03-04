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
ll l,maxx,s;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }
    sort (a+1,a+n+1);
    ll l=1, r=n;
    while (l<=r){
        if (binary_search(a+1,a+n+1,k-a[l]-a[r])){
            cout << "YES";
            return 0;
        }
        if (a[l]+a[r]>=k)
            r--; else
            l++;
    }
    cout << "NO";
    return 0;
}
