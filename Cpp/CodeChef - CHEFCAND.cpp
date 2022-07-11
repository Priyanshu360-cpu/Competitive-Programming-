#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n;
	    cin>>x;
	    if(x<n)
	    cout<<((n-x)/4)+((n-x)%4>0?1:0)<<endl;
	    else cout<<0<<endl;
	}
	return 0;
}
