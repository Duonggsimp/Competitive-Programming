#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e6+5;

int main()
{
  runfast;
  ll n, vt=0, d=0; 
  cin >> n ;
  pair <ll,ll> a[n+1];
  
  for (long i = 1; i<=n ;i++)
    cin >> a[i].fi >> a[i].se;
  sort(a+1, a+n+1);
  for (long i = 1; i<=n ;i++){
      if (a[i].fi >= vt){
        vt = a[i].se;
        d++;
      }
  }

   cout << d;
  return 0;
}

