#include <bits/stdc++.h>
#define ll long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,k,t;
ll res;
ll a[N];
bool f[N];
set <ll> st;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        t += a[i];
    }

    f[0] = 1;
    for (long i=1; i<=n; i++){
        for (long j=t; j>=a[i]; j--)
            if (f[j-a[i]]) f[j] = 1;
    }

    for (long i=1; i<=t; i++){
        if (f[i]) st.insert(i);
    }

    cout << st.size() << xn;
    for (auto it:st){
        cout << it << ' ';
    }
    return 0;

}

