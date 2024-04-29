#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6 + 5;
const int M = 1e3 + 5;
const ll mo = 1e9 + 7;

ll n;
ll a,b,x;
ll t[N];
bool f[N];

void sng(){
    fill (f+1,f+N+1,1);
    f[0] = f[1] = 0;
    for (long i=2; i<=sqrt(N); i++){
        if (f[i])
        for (long j=i*i; j<=N; j+=i)
           f[j] = 0;
    }

    for (long i=1; i<=N; i++){
        t[i] = t[i-1];
        if (f[i]) t[i] += i;
    }
}

int main(){
  
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    sng();
    cin >> n;

    while (n--){
        cin >> a >> b >> x;
        if (x >= b) cout << 0 << xn; else
        cout << t[b] - t[max(x+1,a)-1] << xn;
    }
  
    return 0;
}
