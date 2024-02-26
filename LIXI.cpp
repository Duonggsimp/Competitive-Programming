#include <bits/stdc++.h>
using namespace std;
long a,b,n,dem,tong;
int main ()
{
    cin>>n;
    pair <long,long> m[n+1];
    for(long i=0;i<n;i++)
    {
        cin>>a>>b;
        dem=dem+b;
        m[i]=make_pair(b,a);
    }
    sort(m,m+n,greater<pair<long,long>>());
    //reverse(m,m+n);
    //for (auto it:m)
       //cout<<' '<<endl;
    for (long i=0;i<=dem;i++)
    tong=tong+m[i].second;
    cout<<tong;
    return 0;
}
