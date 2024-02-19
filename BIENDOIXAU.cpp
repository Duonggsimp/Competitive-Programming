#include <bits/stdc++.h>
#define ll long long
#define fi first
#define _FILE "TEMP"
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;
string s;
ll d;
void solve(){
    cin >> s;
    d=0;
    ll l=0, r=s.size()-1;
   while (l<=r){
    if (s[l]!=s[r])
    d++;
    l++;
    r--;
   }
   if (d>2)
    cout << "NO" << xn; else
    cout << "YES" << xn;
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t=5;
    while (t--)
        solve();
    return 0;
}


