#include <iostream>

using namespace std;

int n,res = 1;
int a[10000007];
int fl[10000007], fr[10000007];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i=1;i<=n;++i)
    {
        cin >> a[i];
        if (a[i] > a[i-1]) fl[i] = fl[i-1] + 1;
        else fl[i] = 1;
    }
    fr[n] = 1;
    for (int i=n;i>1;--i)
    {
        if (a[i] > a[i+1]) fr[i] = fr[i+1] + 1;
        else fr[i] = 1;
        res = max(res,fr[i] + fl[i]);
    }
    cout << res - 1;
    return 0;
}
