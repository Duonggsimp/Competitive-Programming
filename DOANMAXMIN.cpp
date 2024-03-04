#include <bits/stdc++.h>
#define _FILE "TEMP"
#define ll long long
using namespace std;
 
int main() {
 
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr); cout.tie(nullptr);
 
  #ifndef ONLINE_JUDGE
  freopen(_FILE".inp","r",stdin);
  freopen(_FILE".out","w",stdout);
  #endif
 
  int t;
  cin >> t;
 
  while (t--) {
    int n;
    cin >> n;
 
    int a[n];
    int Max = INT_MIN;
    int Min = INT_MAX;
    for (int &i : a) {
      cin >> i;
 
      Max = max(Max,i);
      Min = min(Min,i);
    }
 
    int vMax = -1;
    int vMin = -1;
    int res = INT_MAX;
    for (int i=0; i<n; i++) {
      if (a[i] == Max) {
        if (vMin != -1) res = min(res,i-vMin+1);
        vMax = i;
      }
      if (a[i] == Min) {
        if (vMax != -1) res = min(res,i-vMax+1);
        vMin = i;
      }
    }
 
    cout << res << '\n';
  }
 
  return 0;
}

//-----------------------------------------------------------------------//

#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
ll n;
ll a[N],d;
ll mi[N], ma[N];
ll maxx, minn,m;
ll va1,va2,vi1,vi2;

void solve(){
   cin >> n;
    maxx = -1e18;
    minn = 1e18;
    d=0;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        minn = min(minn,a[i]);
        maxx = max(maxx,a[i]);
    }

   for (long i=1; i<=n; i++){
    if (a[i]==maxx || a[i] == minn){
        d++;
        ma[d] = i;
        mi[d] = a[i];
      }
   }
   //cout << d << xn;
   m = 1e18;
   for (long i=2; i<=d; i++){
    if (mi[i]!=mi[i-1])
        m = min(m,ma[i]-ma[i-1]);
    //    cout << ma[i] << ' ';
   }
   if (m==1e18)
   cout << 1 << xn; else
   cout << m+1 << xn;

  }
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    solve();
    return 0;
}
