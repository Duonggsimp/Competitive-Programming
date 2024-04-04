#include <bits/stdc++.h>
#define ll long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;

ll n,k;
ll a[N];
ll f[N];
bool c[N];
ll t;

void sng() {

  memset(c,true,sizeof(c));
  c[0] = c[1] = 0;
  for (long i=2; i<=N; i++) {
    f[i] = f[i-1]; a[i] = a[i-1];
    if (c[i]){
      f[i] += i;  a[i]++;
      for (long j=2*i; j<=N; j+=i) c[j] = 0;
    }
  }
}

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cout << fixed << setprecision(2);
  sng();

  cin >> t;
  while (t--){
    ll l, r;
    cin >> l >> r;
    ll s = f[r]-f[l-1];
    ll d = a[r]-a[l-1];
    cout << 1.0*s/d << xn;
  }

  return 0;
}





