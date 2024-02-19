#include <bits/stdc++.h>
#define ll long long
#define fi first
#define _FILE "TEMP"
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;
ll n;
ll a[N],t[N],f[N]={};

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll n;
    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        f[i] = 1;
        t[i] = 1;
    }
    for (long i=1; i<=n; i++){
            for (long j=1; j<i;j++)
        if (a[i] > a[j])
            f[i] = max(f[i],f[j] + 1);
    }
    reverse(a+1,a+n+1);
     for (long i=1; i<=n; i++){
         for (long j=1; j<i; j++)
        if (a[i] > a[j])
            t[i] = max(t[i],t[j] + 1);
    }
    reverse(t+1,t+n+1);
    ll maxx = 1;
    for (long i=1; i<=n; i++){
        maxx = max(maxx,min(t[i],f[i])*2-1);
    }
  cout << maxx; 
    return 0;
}

