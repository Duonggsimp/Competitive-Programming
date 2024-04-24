#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

string s;
unordered_map <char,ll> mp;
char m1, m2;
ll maxx = -1e18, minn = 1e18;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> s;
    for (char &i:s){
        mp[i]++;
        if (mp[i] > maxx) maxx = mp[i];
        if (mp[i] < minn) minn = mp[i];
    }

    for (char i='z'; i>='a'; i--){
        if (maxx == mp[i]) m1 = i;
    }

    for (char i='a'; i<='z'; i++){
        if (minn == mp[i]) m2 = i;
    }

    cout << m1 << ' ' << maxx << xn;
    cout << m2 << ' ' << minn << xn;
    cout << mp.size()-2;
    return 0;

}
