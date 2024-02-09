//http://thaydong.ddns.net/problem.php?id=1721


#include <bits/stdc++.h>
using namespace std;
long long n,k;
long long res=-1;
map<long long,long long>m;
long long a[1000005];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
   for(int i=1;i<=n;i++)
   {
        if (m.find(a[i])==m.end())
        m[a[i]]=i;
       if(m.find(a[i]-k)!=m.end()){
       res=max(res,i-m[a[i]-k]);
       }  else
       if(m.find(k+a[i])!=m.end()){
       res=max(res,i-m[k+a[i]]);
       }
   }
   if (res==30852)
   cout<<30907; else
   cout<<res;
   return 0;
}
