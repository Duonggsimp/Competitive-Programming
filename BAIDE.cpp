#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N=1e6+5;

bool f[N];
int n;
ll a[N], res=LLONG_MIN, sum=0;

void Sang(){
    memset(f,1,sizeof(f));
    f[0]=f[1]=0;
    for(int i=2; i*i<=1e6; i++){
        if(f[i]){
            for(int j=i*i; j<=1e6; j+=i)
                f[j]=0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    Sang();
    for(int i=2; i<=n; i++){
        if(f[i]){
            sum=max(a[i], sum+a[i]);
            res=max(res, sum);
        }
        else
            sum+=a[i];
    }
    cout<<res;
    return 0;
}
