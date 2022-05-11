#include <iostream>
using namespace std;
int main() {
    int x;
cin>>x;
if(x%2!=0){
	for(int i=1;i<(x/2)+2;i++){
	    for(int j=1;j<=i;j++){
	        cout<<j<<"\t";
	    }
	    for(int j=i+1;j<(x-i);j++){
	        cout<<i<<"\t";
	    }
	    for(int j=i;j>0;j--){
	        if(j==(x/2)+1) continue;
	        cout<<j<<"\t";
	    }
	    cout<<"\n";
	}
}
	return 0;
}
