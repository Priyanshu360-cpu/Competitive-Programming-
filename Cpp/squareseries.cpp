#include <iostream>
using namespace std;
int main() {
    int x;
cin>>x;
	for(int i=1;i<x+1;i++){
	    for(int j=1;j<=i;j++){
	        cout<<j;
	    }
	    for(int j=i+1;j<(x-i);j++){
	        cout<<i;
	    }
	    for(int j=i;j>0;j--){
	        cout<<j;
	    }
	    cout<<"\n";
	}
	return 0;
}
