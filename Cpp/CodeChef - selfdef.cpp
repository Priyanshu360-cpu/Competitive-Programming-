#include <iostream>
using namespace std;
#include<vector>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	      vector<int>a;
	    while(x--){
	        int y;
	        cin>>y;
	        a.push_back(y);
	    }
	    int c=0;
	    for(int i=0;i<a.size();i++){
	        if(a[i]>=10&&a[i]<=60)c=c+1;
	    }
	  cout<<c<<"\n";
	    
	}
	return 0;
}
