#include <bits/stdc++.h>
using namespace std;
long n,ma,s,k;
int main(){
    cin>>n>>k;
    int a[n];
    unordered_map<long,long>mp ;
    for (long i;i<n;i++)
       { cin>>a[i];
       a[i]=a[i-1]+a[i];
       if (mp.find(a[i])==mp.end())
        mp[a[i]]=i;
        }
   for (long i;i<n;i++){
    if (mp.find(a[i]-k)!=mp.end())
        ma=max(ma,i-mp[a[i]-k]);
   }
   if (ma==0)
   cout<<-1; else
    cout<<ma;
    return 0;
}
