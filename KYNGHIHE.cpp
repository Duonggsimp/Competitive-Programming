#include <bits/stdc++.h>
using namespace std;
long dpa[100005],dpb[100005],dpc[100005],sum,a,b,c;
unordered_map<long,long> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long ma=0,n,k,r=0,d=0;
    cin>>n;
    dpa[0]=0;
    dpb[0]=0;
    dpc[0]=0;
    for (long i=1;i<=n;i++){
      cin>>a;
      dpa[i]=max(dpb[i-1],dpc[i-1])+a;
      cin>>b;
      dpb[i]=max(dpa[i-1],dpc[i-1])+b;
      cin>>c;
      dpc[i]=max(dpb[i-1],dpa[i-1])+c; }
     cout<<max(dpa[n],max(dpb[n],dpc[n]));
return 0;
