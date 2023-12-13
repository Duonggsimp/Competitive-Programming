//http://bqnoj.site/problem/chiamang

#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+5;

int n, k, a[maxn];
long long l,r,mid,sum;

bool check(long long x){
    // Kiem tra co the tao tong be hon hoac bang x
    long long cur=0, parts=0;
    for(int i=1;i<=n;i++){
        cur += a[i];
        if(cur > x){
            cur = a[i];
            parts++;
        }
    }
    if(cur > 0) parts++;
    return parts <= k;
}

int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        sum += a[i];
    }
    l=*max_element(a+1,a+n+1);r=sum;
    while(l <= r){
        mid = (l+r)/2;
        if(check(mid)) r = mid-1;
        else l = mid+1;
    }
    cout << l;
}
