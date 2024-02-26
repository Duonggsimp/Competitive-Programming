#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define ii pair<int,int>
using namespace std;
const int N = 1e6+3, mo = 1e9+7; 
ll n, m, a[N], res, k, x;

int main()
{

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    map <ll,ll> mp;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        a[i]+=a[i-1];
    }
    mp[0] = 1;
    res = 0;
    for (long i=1; i<=n; i++){
        res += mp[a[i]-k];
        mp[a[i]]++;
    }
    cout << res;
    return 0;
}
