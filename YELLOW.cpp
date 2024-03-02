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
bool tp;
void nhap(){
    cin >> n >> k;
 for (long i=1; i<=n; i++){
    cin >> a[i];
    if (a[i] == 2){
        vt = i;
        tp = true;
        } else
    if (a[i] == 3){
        vt = i;
        tp = false;
    }
 }
}

void subp(){
    ll it = vt;
    d=0;
    bool kt = true;
     for (long i=1; i<=k; i++){
        if (kt){
          it++;
        if (a[it]==0)
          d++;
        if (it==n)
            kt = !kt;
        } else {
          it--;
        if (a[it]==0)
          d++;
        if (it==1)
            kt = !kt;
        }
     // cout << it << ' ';
     }
}

void subt(){
    ll it = vt;
    d=0;
    bool kt = true;
     for (long i=1; i<=k; i++){
        if (kt){
          it--;
        if (a[it]==0)
          d++;
        if (it==1)
            kt = !kt;
        } else {
          it++;
        if (a[it]==0)
          d++;
        if (it==n)
            kt = !kt;
        }
    //  cout << it << ' ';
     }
}

void solve(){
   nhap();
   if (tp)
    subp(); else
    subt();
   cout << d << xn;
   d=0;
}
int main()
{
  freopen("YELLOW.INP","r",stdin);
  freopen("YELLOW.OUT","w",stdout);

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  ll t;
  cin >> t;
  while (t--)
  solve();
  return 0;
}
