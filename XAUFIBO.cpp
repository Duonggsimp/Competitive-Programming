#include <bits/stdc++.h>
#define ll long
#define fi first
#define se second
#define pb push_back
#define xn '\n'

using namespace std;
const int N=1e6+5;
ll n,k,vt,maxx;
string s;

string fibo(ll k){
   string a ="A";
   string b ="B";
   string fi ="";

   if (k==1) return "A";
   if (k==2) return "B";

   ll cnt = 2;
   while (cnt < k){
    cnt++;
    fi=b+a;
    a=b;
    b=fi;
   }
   return fi;
}
int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  cin >> k;
  s = fibo(k);

  // cout << s << xn;
  n = s.size();
  s = ' ' + s;

  bool f[n+1][n+1];
  memset(f,0,sizeof(f));

  for (long i=1; i<=n; i++)
    f[i][i] = true;

  maxx = 1;
  for (long len=2; len<=n; len++){
    for (long i=1; i<=n-len+1; i++){
        long j = len+i-1;
        if (len==2 && s[i] == s[j])
        f[i][j] = true; else
        f[i][j] = s[i]==s[j] && f[i+1][j-1];
        if (f[i][j]) maxx = max(maxx,len);
    }
  }
  cout << maxx;
  return 0;
}
