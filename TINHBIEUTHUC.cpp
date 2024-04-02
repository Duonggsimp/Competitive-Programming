#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e5+5;
const ll mo = 1e9+7;

ll d;
ll t1,t2;
string s;
string a[N];
stack <ll> st;

ll get(string x){
if (x == "+") return t1+t2; else
if (x == "-") return t2-t1; else
if (x == "*") return t1*t2;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    getline(cin,s);
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)  a[++d] = tmp;
   
    for (long i=1; i<=d; i++){
        if (a[i] == "+" || a[i] == "-" || a[i] == "*"){
            t1 = st.top(); st.pop();
            t2 = st.top(); st.pop();
            st.push(get(a[i]));
        } else
        st.push(stoll(a[i]));
    }

    cout << st.top();
    return 0;
}
