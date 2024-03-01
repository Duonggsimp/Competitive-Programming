#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll a[N];
ll n,maxx,d;
map <ll, ll> mp; 
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
    }

    for (long i=1; i<=n; i++){
        if (a[i]==0){
            d++;
        } else {
            d--;
        }
        if (mp.find(d)!=mp.end())
            maxx = max(maxx,i-mp[d]);
        else
            mp[d] = i;
    }

    cout << maxx;
    return 0;
}



