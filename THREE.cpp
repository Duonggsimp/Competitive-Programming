#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n,m,k;
    ll d=0;

    cin >> n >> m >> k;
    d+=k;
    if (n > m){
       n -= m;
       d += m;
       d += n/3;
    } else d += n;

    cout << d;
    return 0;
}
