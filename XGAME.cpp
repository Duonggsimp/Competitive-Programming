#include <bits/stdc++.h>
using namespace std;
long long b[1000005]={},a[1000005];
bool check[1000000];
bool cmp(pair<long,long> x,pair<long,long> y){
   if (x.first==y.first)
    return x.second>y.second; else
    return x.first<y.first;
}
bool SCP(long n){
long tmp=sqrt(n);
if (tmp*tmp==n)
  return true; else
  return false;
}
void sannt()
{
    memset(check,1,sizeof(check));
    check[1]=false;
    for (int i=2;i<=sqrt(1000000);i++)
    if(check[i]==true)
    for(int j=i;j<=1000000/i;j++)
    check[i*j]=false;
}
int main()
{
  long n,dem=0,x,c,m;
  cin>>n;
  for (long i=1;i<=n;i++){
    cin>>a[i];
  }
  for (long i=1;i<=n;i++){
      if (i<=n-10){
    for (long j=i+1;j<=i+10;j++){
      if (SCP(abs(a[j]-a[i]))&&(a[j]!=a[i])){
          if (b[i]==0)
          b[i]=1;
        b[j]=max(b[j],b[i]+1);
      }
    }
      }
     else{
        for (long j=i+1;j<=n;j++){
      if (SCP(abs(a[j]-a[i]))&&(a[j]!=a[i])){
          if (b[i]==0)
          b[i]=1;
        b[j]=max(b[i]+1,b[j]);
      }
    }
   }
  }

  cout<<*max_element(b+1,b+n+1);
  return 0;
}
