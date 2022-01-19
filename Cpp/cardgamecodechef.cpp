#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(52%x==0) cout<<0<<"\n";
	    else{
	        int z=0;
	        int y=52;
	        while(y%x!=0){
	            y=y-1;
	            z=z+1;
	        }
	        cout<<z<<"\n";
	    }
	}
	return 0;
}
