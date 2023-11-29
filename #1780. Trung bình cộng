//http://chuyentin.ddns.net/problem.php?id=1780

#include <bits/stdc++.h>
using namespace std;
long n,ma,s,k;
int main(){
    cin>>n>>k;
    int a[n];
    unordered_map<long,long>mp ;
    for (long i;i<n;i++)
       { cin>>a[i];
       a[i]=a[i]-k; } 
   for (long i;i<n;i++){
    s+=a[i];
    if (s==0)
        ma=i+1;
    if (mp.find(s)!=mp.end())
        ma=max(ma,i-mp[s]);
    else mp[s]=i;
   }
   if (ma==0)
   cout<<-1; else
    cout<<ma;
    return 0;
}
 
