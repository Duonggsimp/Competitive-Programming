#include <bits/stdc++.h>
using namespace std;
long long n,dp[1005][1005][7],k,a[1005],b[1005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
//    freopen("kseqgame.inp","r",stdin);
//    freopen("kseqgame.out","w",stdout);
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    for(long long i=1;i<=n;i++)
        cin>>b[i];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            for(int q=1;q<=k;q++)
                dp[i][j][q]=-1e18;
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=n;j++)
            for(long long q=1;q<=k;q++)
            {
                dp[i][j][q]=max(dp[i-1][j][q],dp[i][j-1][q]);
                dp[i][j][q]=max(dp[i][j][q],dp[i-1][j-1][q-1]+a[i]*b[j]);
            }
    cout<<dp[n][n][k];
    return 0;
}
