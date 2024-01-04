//http://thaydong.ddns.net/problem.php?id=1460

#include <bits/stdc++.h>

using namespace std;
long a[1000000]={0},dp[1000000];
long n,m,dem,ma;
int main(){
    cin>>n;
    for (long i=1;i<=n;i++)
        cin>>a[i];
       dp[1]=a[1];
       dp[2]=a[1]+a[2];
    for (long i=3;i<=n;i++){
            dp[i]=max(dp[i-3]+a[i]+a[i-1],max(dp[i-2]+a[i],dp[i-1]));
    }
   cout<<dp[n];
    return 0;
}
