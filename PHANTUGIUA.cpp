#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 2e6+5;
const ll mo = 1e9+7;

ll n,k;
ll a[N];
ll l,r;
ll res;
bool kt;
unordered_map<ll, ll> mp;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    mp[0] = 1;
    kt = 0;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        if (a[i] == k) kt = 1;
        if (a[i] > k) l++;
        if (a[i] < k) r++;
        if (kt) {
        if (mp.find(r-l) != mp.end()) res += mp[r-l];
        }
        else mp[r-l]++;
     }

     cout << res;
    return 0;
}
