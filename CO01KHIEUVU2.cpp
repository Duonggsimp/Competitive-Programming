#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;
string s;
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  ll n;
  cin >> n;
  cin >> s;
  s=' '+s;
  ll d=0;
  ll res=0;
  map<ll,ll>mp;
  mp[0]=1;
  
  for (long i=1; i<=n; i++){
    if (s[i]=='a')
     d++; else
     d--;
     res += mp[d];
     mp[d]++;
  }
  
  cout << res;
    return 0;
}


