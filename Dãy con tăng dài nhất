#include <bits/stdc++.h>
using namespace std;

int n;
int a[100000],b[100000];
const int mina= -999999999,maxa=999999999;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	b[0]=mina;
	int kq=1;
	for(int i=1;i<=n;i++) b[i]=maxa;
	for(int i=1;i<=n;i++){
		int vt=lower_bound(b,b+n+1,a[i])-b;
		b[vt]=a[i];
		kq=max(kq,vt);
	}
	cout<<endl<<kq;
	return 0;
}
