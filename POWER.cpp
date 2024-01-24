#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
const int MOD = 1e9+7;
 
ll espPow(const int &m, const int &n) {
  if (n == 0) return 1;
  ll res = espPow(m,n/2);
  if (n % 2 == 0) return res*res % MOD;
  else return m*(res*res%MOD)%MOD;
}
 
int main() {
 
  int m,n;
  cin >> m >> n;
 
  cout << espPow(m,n);
 
  return 0;
}
