#include <bits/stdc++.h>
#define ll long
#define fi first
#define se second
#define pb push_back
#define xd '\n'
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e3+5;
long a[N][N], n, k, l, r, d ,vt ,ma,m,x;
bool cmp(pair<ll,ll> a,pair<ll,ll> b){
  if (a.fi==b.fi)
    return a.se<b.se;
    return a.fi>b.fi;
}
int main()
{
  runfast;

  #ifndef ONLINE_JUDGE
  freopen(_FILE".inp","r",stdin);
  freopen(_FILE".out","w",stdout);
  #endif
  
  cin >> n >> m;
  ll s = 0;
  map <ll, ll> mp;
  pair <ll ,ll> a[n*m+3];

  for (long i=1; i<=n ;i++)
    for (long j=1; j<=m ;j++){
    cin >> x;
    mp[x]++;
    ma = max(ma,x);
  }
  
  for (long i=0; i<=ma ; i++){
    if (mp.find(i)!=mp.end()){
        d++;
        a[d] = make_pair(mp[i],i);
    }
  }
  
  sort(a+1,a+d+1,cmp);
  for (long i=1; i<=d ;i++){
    cout << a[i].se << ':' << a[i].fi << xd;
  }
  return 0;
}

