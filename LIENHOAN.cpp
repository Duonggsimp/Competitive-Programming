#include <bits/stdc++.h>
#define i2 pair<int,int>
using namespace std;
 
const int N = 2e5+3;
int n, cur, ans;
i2 a[N];
 
bool comp(i2 a, i2 b)
{
    return a.second < b.second;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a + n, comp);
    cur = -1;
    for (int i = 0; i < n; i++)
        if (a[i].first >= cur)
        {
            ans++;
            cur = a[i].second;
        }
    cout << ans;
    return 0;
}
