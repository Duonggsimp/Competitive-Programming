#include <bits/stdc++.h>
using namespace std;
long long  m,n,x,k;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    long long a[m+3],b[n+2];
   for (long i=1;i<=m;i++){
   cin>>a[i];
   }
   for (long i=1;i<=n;i++){
   cin>>b[i];
   }
   sort(a+1,a+m+1);
   sort(b+1,b+n+1);
   long i=1,j=1,s=0;
   while(i<=m&&j<=n){
    if (a[i]>b[j]){
        i++;
        j++;
        s++;
    } else
    i++;
   }
   cout<<s;
    return 0;
}



