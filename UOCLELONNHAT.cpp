#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define xn '\n'
using namespace std;
const int N=1e6+5;
const ll mo=1e9+7;

ll t,n;
ll a[N];

void sang(){

 for(long i=2; i<=N; i++)
    a[i] = 1;
  a[0] = a[1] = 1;
 for(ll i=2; i<=N; i++){
    for (ll j=i*2; j<=N; j+=i){
        if (i % 2 == 1)
            a[j] = max (a[j],i);
    }
 }

}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  sang();
  cin >> t;
  while (t--){
    cin >> n;
    cout << a[n] << xn;
  }
  return 0;
}

