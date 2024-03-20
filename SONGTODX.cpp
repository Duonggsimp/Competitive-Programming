#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,k;
ll l,r;
ll d;

ll LE(ll n){
    ll m=n/10;
    while (m>0)
    {
     n=n*10+m%10;
     m/=10;
    }
    return n;
}

ll CH(ll n){
    ll m=n;
    while (m>0)
    {
     n=n*10+m%10;
     m/=10;
    }
    return n;
}

bool C(ll n)
{
    if(n<2) return 0;
    for (long i=2; i<=sqrt(n); i++)
    if(n%i == 0) return 0;
    return 1;
}

ll T(ll n){
   ll t = 0;
   while (n!=0){
    t+=n%10;
    n/=10;
   }
   return t;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> l >> r;
    for (long i=1; i<=1e6; i++){
        n = LE(i);
        if (l<=n && n<=r && C(T(n)))
        d++;
        n = CH(i);
        if (l<=n && n<=r && C(T(n)))
        d++;
    }
    cout << d;
    return 0;
}

