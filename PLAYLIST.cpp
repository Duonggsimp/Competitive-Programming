#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
  ll n;
  cin >> n;
  ll a[n];
  for (ll &i : a) cin >> i;

  ll res=0;
  map<ll,ll> c;
  for (ll r=0,l=0; r<n; r++) {
    c[a[r]]++;
    while (c[a[r]] > 1 && l<n) {
      c[a[l]]--;
      l++;
    }
    res = max(res,r-l+1);
  }
  cout << res;
  return 0;
}
