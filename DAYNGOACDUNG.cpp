#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

string s;
ll n,t;
bool kt;

bool check(char x, char y){
  if (x == '(' && y == ')') return true;
  if (x == '[' && y == ']') return true;
  if (x == '{' && y == '}') return true;
  return false;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--){
            
    cin >> s;
    stack <char> st;
    n = s.size();
    s = ' '+s;
    kt = true;
    for (long i=1; i<=n; i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]); else {
            if (st.empty()) { kt = false; break; }
            if (check(st.top(),s[i]))
            st.pop(); else { kt = false; break; }
        }
    }
    if (kt && st.empty())
        cout << "YES" << xn; else
        cout << "NO" << xn;
    }
    return 0;
}
