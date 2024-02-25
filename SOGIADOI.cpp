#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin>>n;
    if((n!=2&&n%2==0)||(n!=5&&n%5==0)){
        cout<<"NO";
        return 0;
    }
    for(long long i=1;i*i<=n/2;++i){
        long long a=n-i*i;
        long long b=sqrt(a);
        if(b*b==a){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
