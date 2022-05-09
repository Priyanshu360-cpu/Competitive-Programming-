#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
int n,x,y,m=0;
cin>>n>>x>>y;
int p=x;
m=m+(2*(n-1));
x=y>p?p:p-y+1;
m=m+(n-x);
x=n-y>=p?p:p-(n-y);
m=m+(n-x);
cout<<m<<endl;
	}
	return 0;
}
