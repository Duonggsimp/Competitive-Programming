#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;
ll n,maxx;
ll a[N];
ll d,vt;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }
    for (long i=1; i<n; i++){
        if (a[i]>a[i+1]){
            if (d>maxx){
                maxx = d;
                vt = i;
            } d=1;
        } else d++;
    }

    cout << vt-maxx+1 << ' '<< vt;
    return 0;
}
