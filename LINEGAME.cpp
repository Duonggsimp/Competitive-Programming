#include <bits/stdc++.h>
using namespace std;
long n,ma,s,k,dp1[1000005],dp2[1000005];
int main(){
    cin>>n;
    long a[n+5];
    for (long i=1;i<=n;i++)
        cin>>a[i];
    for (long i=1;i<=n;i++){
        dp1[i]=max(dp1[i-1],dp2[i-1]+a[i]);
        dp2[i]=max(dp2[i-1],dp1[i-1]-a[i]);
    }
    cout<<max(dp1[n],dp2[n]);
    return 0;
}
