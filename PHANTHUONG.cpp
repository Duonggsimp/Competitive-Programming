//http://thaydong.ddns.net/problem.php?id=1759


#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    int x=(int)sqrt(n);
    if (x%2==0)
        x--;
    for(int i=x;i>=1;i-=2)
        if(n%i==0){
            cout<<n/i;
            return 0;
        }
    return 0;
}
