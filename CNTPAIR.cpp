#include <bits/stdc++.h>
using namespace std;
long long n, a;
int sc (long long n)
{
  int r = sqrt (n);
  return r * 2 + 1;
}

int main ()
{
  ios::sync_with_stdio (0);
  cin.tie (0);
  cout.tie (0);
  cin >> a;
  for (int i = 1; i <= a; i++)
	{
	  cin >> n;
	  cout << sc (n) << " ";
	}
}
