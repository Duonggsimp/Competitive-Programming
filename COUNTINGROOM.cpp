#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int f[2001][2001]={};
void fill(int i, int j)
{
    f[i][j]=2;
    if (f[i+1][j]==1) fill(i+1,j);
    if (f[i-1][j]==1) fill(i-1,j);
    if (f[i][j+1]==1) fill(i,j+1);
    if (f[i][j-1]==1) fill(i,j-1);
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,i,j,res=0; char a;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a;
            if (a=='#') f[i][j]=2; else f[i][j]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if (f[i][j]==1) { res++; fill(i,j); }
        }
    }
    cout<<res;
    return 0;
}
