#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+5;
long a[N], n, k, l, r, d;
long f1,f2,f3,f4;
int main()
{
  runfast;
  cin >> n >> k;
  ll s = 0;
  for (long i=1; i<=n ;i++){
    cin >> a[i];
  }
  while (k--){
    cin >> l >> r >> s;
        int x = lower_bound(a+l,a+r,s)-a;
        if (a[x]<s)
        cout << -1 << '\n'; else
        cout << a[x] << '\n';
  }
  return 0;
}

