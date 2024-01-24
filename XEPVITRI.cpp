//problem 3: https://dochub.com/duonggphung2212/xP5LzojKa8eyY23R7ZDlO3/bai-tap-10-docx

#include <bits/stdc++.h>

using namespace std;
long a[100][100];
long n,m,dem,ma;
int main(){
    cin>>n>>m;
    pair<long,long>mp[n];
    for (long i=1;i<=n;i++)
        for (long j=1;j<=m;j++)
    {
        cin>>a[i][j];
    }
    for (long i=1;i<=n;i++){
        for (long j=1;j<=m;j++)
            ma=max(ma,a[i][j]);
    mp[dem]=make_pair(ma,i);
    dem++;
    ma=0; }
    sort(mp,mp+dem);
    reverse(mp,mp+dem);
    for (auto it:mp){
        for (long j=1;j<=m;j++)
            cout<<a[it.second][j]<<' ';
        cout<<endl;}
    return 0;
}

