#include <bits/stdc++.h>
#define ll long long 
#define fi first 
#define se second
#define xn '\n'
using namespace std; 
const int N = 1e6+5; 

ll n; 
ll a[N];  
ll l,r,m;
ll minn, maxx; 

ll C(ll m){
  ll sum = 0;
  for (long i=1; i<=n; i++){
    sum += abs(a[i]-m); 
  }
  return sum; 
}

int main(){

  ios_base::sync_with_stdio(0); 
  cin.tie(0); cout.tie(0); 

  cin >> n;
  for (long i=1; i<=n; i++){
    cin >> a[i]; 
  }

  sort(a+1,a+n+1);

  cout << C(a[n/2+1]); 
  return 0; 
}
