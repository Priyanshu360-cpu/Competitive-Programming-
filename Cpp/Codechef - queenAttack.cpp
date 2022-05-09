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

cout<<m+(x-1<y-1?x-1:y-1)+(x-1<n-y?x-1:n-y)+(n-x<y-1?n-x:y-1)+(n-x<n-y?n-x:n-y)<<endl;
	}
	return 0;
}
