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
ll d;

void solve(){
  d = 0;
  for (long i=1; i<=n; i++){
    cin >> a[i];
  }

  sort(a+1,a+n+1);
  ll l=1, r=n;
  while (l<=r){
    if (a[l]+a[r] <= k){
        l++;
        r--;
        d++;
    } else
    if (a[l]+a[r] > k){
        r--;
        d++;
    }
  }
  cout << d << xn;
}

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  while (cin >> n >> k)
    solve();

}
