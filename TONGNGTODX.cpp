
#include <bits/stdc++.h>
#define xn '\n'
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=1e6+5;
const ll mo=1e9+7;
ll a[N];
bool check[N];
void sannt()
{
    memset(check,1,sizeof(check));
    check[1]=false;
    for (int i=2;i<=sqrt(1000000);i++)
    if(check[i]==true)
    for(int j=i;j<=1000000/i;j++)
    check[i*j]=false;
}
bool C(ll n){
  ll m=n;
  ll t=0;
  while (n!=0){
    t = t*10+n%10;
    n/=10;
  }

  return t==m;
}
int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  sannt();
  ll n;
  cin >> n;
  for (long i=1; i<=1e6; i++)
    if (check[i]&&C(i))
      a[i] = a[i-1] + i; else
      a[i] = a[i-1];

    ll l=0, r=0;
    while (n--){
      cin >> l >> r;
      cout << a[r] - a[l-1] << xn;
    }
    return 0;
}


              /*
  duonggsimp

    /\_/\
   (= ._.)
   / >?  \>$
              */
