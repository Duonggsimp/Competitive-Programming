#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;

  int c[n];
  for (int &i : c) cin >> i;
  sort(c,c+n);

  long long res = 0;
  for (int i=0; i<n; i++) {
    int it = upper_bound(c+i+1,c+n,k-c[i])-c;
      res += it-1-i;

  }

  cout << res;

  return 0;
}
