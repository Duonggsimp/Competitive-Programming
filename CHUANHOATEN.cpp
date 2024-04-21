#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

string s;
string st;
string tmp;
string name;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    getline(cin,s);
    getline(cin,st);

    stringstream ss(s);
    while (ss >> tmp){
        for (char &i : tmp){
            i = tolower(i);
        }
        tmp[0] = toupper(tmp[0]);
        name += tmp + ' ' ;
    }

    cout << name << xn;
    if (st[1] == '/') st = '0' + st;
    if (st[4] == '/') st.insert(st.begin() + 3,'0');
    cout << st << xn;
    return 0;

}
