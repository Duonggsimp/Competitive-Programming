#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
 
ll n,k;
ll res;
bool f[N];
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    fill (f+1,f+N+1,0);
    cin >> n >> k;
    for (long i=1; i<=k; i++){
        for (long j=i+1; j<=n; j+=i+1)
            f[j] = !f[j];
    }
 
    for (long i=1; i<=n; i++){
        if (f[i]) res++;
    }
 
    cout << res;
    return 0;
 
}
