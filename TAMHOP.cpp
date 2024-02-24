#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define duongg_simp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
int main()
{
  duongg_simp;

  ll n;
  cin >> n;
  ll a[n+5];
  for (long i=1; i<=n; i++){
    cin >> a[i];
  }

  sort (a+1,a+n+1);
  ll res =0;
  ll d=0, maxx=-1e18;
  for (long i=1; i<=n; i++){
       for (long j=i+1; j<=n; j++){
            if ((a[i]+a[j])%2==0){
            ll vt = lower_bound(a+1,a+n+1,(a[i]+a[j])/2)-a;
                if (a[vt]==(a[i]+a[j])/2&&vt!=i&&vt!=j){
                d++;
             maxx = max(maxx,a[i]+a[j]+a[vt]);
             }
          }
       }
  }
  cout << d << '\n' << maxx;
  return 0;
}

