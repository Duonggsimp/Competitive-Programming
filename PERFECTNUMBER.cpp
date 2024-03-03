#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define xn '\n'

using namespace std;
const int N=1e6+5;
ll n,k,vt,d;
ll f[5] = {6,28,496,8128,33550336};
int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  ll n,m;
  ll t;
  cin >> t;
  while (t--){
  cin >> n;
  if (binary_search(f,f+5,n))
    cout << "YES" << xn; else
    cout << "NO" << xn;
  }
  return 0;
}
