#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define runfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e6+5;
ll n, a[N], res, vt , dp[N], l, k, r;

long build(long l,long r){
  long m=0, res=1e9, t1=0, t2=0;
  long u=l, v=r;
  while (l <= r){
     m = (l+r)/2;
     t1 = a[m]-a[u-1];
     t2 = a[v]-a[m];
     res = min (res, abs(t2-t1));
     if (t2-t1==0) return 0;
     if (t1<t2)
        l = m + 1;
      else
     if (t1>t2)
     r = m - 1;
  }
  return res;
}

int main()
{
  runfast;

  cin >> n >> k;
  for (long i = 1; i<=n ;i++){
        cin>>a[i];
       a[i]=a[i-1]+a[i];
  }
   for (long i = 1; i<=k ;i++){
      cin >> l >> r;
      cout << build(l,r) << "\n";
   }
  return 0;
}


