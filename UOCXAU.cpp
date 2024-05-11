#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n;
ll cnt;
ll a[N];
string s;
string st;
string temp;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> s; 
    n = s.size();
    for (long i=1; i*i<=n; i++){
        if (n % i == 0){ a[++cnt] = i;
        if (i * i != n) a[++cnt] = n/i;
        }
    }

    sort(a+1,a+cnt+1);
    for (long i=1; i<=cnt; i++){
        st = s.substr(0,a[i]);
        temp = "";
        for (long j=1; j<=n/a[i]; j++) temp = temp + st;
        if (temp == s){
            cout << st;
            break;
        }
    }
    return 0;
}
