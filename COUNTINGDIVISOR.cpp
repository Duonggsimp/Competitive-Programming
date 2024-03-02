
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define xn '\n'

using namespace std;
const int N=1e6;
ll n,k,vt,d;
ll a[N];

void sanguoc(){

  for (long i=1; i<=N; i++){
    for (long j=i; j<=N; j+=i)
        a[j]++;
  }
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  ll t;
  sanguoc();
  cin >> t;
  while (t--){
    ll x;
    cin >> x;
    cout << a[x] << xn;
  }
  return 0;
}
