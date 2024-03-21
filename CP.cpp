#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const ll N = 1e6+5;
const ll mo = 1e9+7;

ll n,k;
ll a[N];
ll minn;
ll s;


int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n;

  a[0] = 0;
  for (long i=1; i<=n; i++){
    cin >> a[i];
    a[i] += a[i-1];
  }

  minn = 1e18;
  for (long i=1; i<=n; i++){
    minn = min(minn, abs(a[n]-2*a[i]));
  }

  cout << minn;
 return 0;
}
