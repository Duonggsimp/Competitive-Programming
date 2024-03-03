#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
ll n;
ll a[N];
ll res,k;

ll count1(ll x) {
  ll res = 0;
  for (ll f=5; f<=x; f*=5) {
    res += x/f;
  }
  return res;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;

    res = count1(n);
    cout << res;
    return 0;
}
