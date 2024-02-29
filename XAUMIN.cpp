#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=2e3+5;
const ll mo=1e9+7;

 int main()
{
   int k;
    cin >> k;
    string s;
    cin >> s;
    int l = s.size() - k + 1;
    int r = 0;
    for (int i = 1; i <= k;i++) {
        int minvl = 10;
        int n;
        for (int j = r; j < l;j++) {
          if (minvl > s[j] - '0') {
                minvl = s[j] - '0';
                n = j;
            }
        }
        l++;
        r = n + 1;
            cout << minvl;
       }
}
     
