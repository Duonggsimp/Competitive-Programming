#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define xn '\n'

using namespace std;
const int N=1e6+5;
ll n,k,vt,d;
ll a[N];

bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    if (a.fi==b.fi)
   return a.se>b.se;
   return a.fi<b.fi;
}

int main()
{

 // freopen("EXERCISE.INP","r",stdin);
 // freopen("EXERCISE.OUT","w",stdout);

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  ll n;
  ll s;
  cin >> n >> s;

  pair <ll, ll > a[n+2];
  for (long i=1; i<=n; i++) {
    cin >> a[i].fi >> a[i].se;
  }

  ll d=0;
  sort(a+1,a+n+1,cmp);
  for (long i=1; i<=n; i++){
    if (s<a[i].fi)
        break; else{
        s+=a[i].se;
        d++;
      }
  }
  for (long i=1; i<=n; i++){
    cout << a[i].fi << ' ' << a[i].se << xn;
  }
  cout << d;
  return 0;
}
