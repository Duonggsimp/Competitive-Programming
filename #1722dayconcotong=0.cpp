//http://chuyentin.ddns.net/problem.php?id=1722

#include <bits/stdc++.h>
using namespace std;
long n,ma,s;
int main(){
    cin>>n;
    int a[n];
    unordered_map<long,long>mp ;
    for (long i;i<n;i++)
        cin>>a[i];
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
