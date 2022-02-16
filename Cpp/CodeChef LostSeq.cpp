#include <iostream>
using namespace std;
#include <vector>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int a[2*x];
	    int g=0;
	    for(int i=0;i<(2*x);i++){cin>>a[i];g=g+a[i];}
	    if(g%2==0) cout<<"YES"<<"\n";
	    else cout<<"NO"<<"\n";
	   
	}
	return 0;
}
