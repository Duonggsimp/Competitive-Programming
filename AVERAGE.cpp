#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
using namespace std;
const int N=1e5+5;

ll n,k; 
ll a[N],vt ,maxx;

int main(){
  
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  cin >> n >> k;
  ll s = 0;
  for (long i=1; i<=n ;i++){
    cin >> a[i];
    a[i] -= k;
  }
  
  map <ll, ll> mp;
  for (long i=1; i<=n ;i++){
    s+=a[i];
    if (s==0)
        maxx = max(maxx,i);
    if (mp.find(s)==mp.end())
        mp[s]=i; else
    if (i-mp[s] > maxx){
        vt = mp[s]+1;
        maxx = i-mp[s];
    }
  }
  if (vt == 0){
    cout << -1;
  } else
  cout << maxx;
  return 0;
}
