#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int ktsnt(int x)
{
    int i;
    if (x<=1) return 0;
    for(i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}

int main()
{
    cin>>n;
    while (n>0)
    {
        if (ktsnt(n)==1)
        {
            n=n/10;
        }
        else
        {
            cout<<"KHONG";
            return 0;
        }
    }
    cout<<"PHAI";

}
