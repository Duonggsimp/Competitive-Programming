#include <bits/stdc++.h>
#define _FILE "TEMP"
#define ll long long
using namespace std;
 
const int MAX = 2e6;
int minPrime[MAX+7];
 
int f[MAX+7];
 
void Eratosthenes() {
  for (int i=2; i*i<=MAX; i++) {
    if (minPrime[i] == 0) {
      for (int j=i*i; j<=MAX; j+=i) {
        if (minPrime[j] == 0) minPrime[j] = i;
      }
    }
  }
 
  for (int i=2; i<=MAX; i++) 
    if (minPrime[i] == 0) minPrime[i] = i;
}
 
ll solve(int n) {
  ll res = 1;
 
  while (n > 1) {
    res *= minPrime[n];
 
    int cur = minPrime[n];
    while (n % cur == 0) {
      n /= cur;
    }
  }
 
  return res;
}
 
int main() {
    
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
    
  #ifndef ONLINE_JUDGE
  freopen(_FILE".inp","r",stdin);
  freopen(_FILE".out","w",stdout);
  #endif
    
  Eratosthenes();
 
  int l,r;
  cin >> l >> r;
 
  ll res = 0;
  for (int i=l; i<=r; i++) {
    ll p = solve(i);
    res += f[p]++;
  }
 
  cout << res;
 
  return 0;
}
