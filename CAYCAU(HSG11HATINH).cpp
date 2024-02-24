#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
const int N = 1e6+3, mo = 1e9+7;
int n, m, dp[N], res, k;
int a[N];
int main()

{
    freopen("BRIDGE.INP","r",stdin); 
    freopen("BRIDGE.OUT","w",stdout); 

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for (long i = 1; i<=n ; i++){
        cin >> a[i];
        a[i] = a[i-1] + a[i];
    }
    map <int, int> mp;
    mp[0] = 1;
    for (long i = 1; i<=n ; i++){
        res += mp[a[i]-k];
        mp[a[i]]++;
    }
    cout << res;
    return 0;
}
