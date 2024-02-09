#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
 
  int n,k;
  cin >> n >> k;
 
  map<ll,int> prefix;
  ll sum=0; int res=INT_MAX;
  for (int i=0; i<n; i++) {
    int x;
    cin >> x;
 
    sum += x;
    if (prefix.count(sum-k))
      res = min(res,i-prefix[sum-k]);
 
    prefix[sum] = i;
  }
 
  if (res == INT_MAX) cout << -1;
  else cout << res;
 
  return 0;
}
 
