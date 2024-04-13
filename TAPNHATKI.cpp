#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,k,c;
ll res;
string s;
ll a[N];

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> c;
    cin.ignore(1);
    getline(cin,s);
    for (char &i:s) if (isalpha(i)) i = ' ';
  
    string tmp = "";
    stringstream ss(s);
    while (ss >> tmp) a[++n] = stoll(tmp);
    sort(a+1,a+n+1);
  
    cin >> k;
    for (long i=1; i<=n; i++){
        ll l = lower_bound(a+i+1,a+n+1,k-a[i]) - a;
        ll r = upper_bound(a+i+1,a+n+1,k-a[i]) - a;
        res += r - l;
    }
  
      cout << res << xn;
   return 0;
}

