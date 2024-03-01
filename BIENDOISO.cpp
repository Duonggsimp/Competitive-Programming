#include <bits/stdc++.h>
#define ll long long
#define fi first
#define xn '\n'
#define se second
#define pb push_back
using namespace std;
const int N=1e6+5;
const ll mo = 1e9+7;
ll a[N];
ll n,k;
string s;
int main()
{
  ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
  cin >> s;
   n = s.size();
   s = ' '+s;
   bool kt = false;
  for (long i=1 ;i<=n ;i++){
     if (s[i]=='0')
        kt = true;
     k+=s[i]-'0';
  }
  sort(s.begin(),s.end(),greater<char>());
  if (k%3==0&&kt)
    cout << s; else
    cout << -1;
  return 0;
}
