#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%2){
	        cout<<"YES"<<"\n";
	        int i=1;
	        while(i<=(x/ 2)){
	             cout<<i<<" ";
	             i++;
	        }
	        cout<<x<<" ";
	        i=x-1;
	        while(i>(x/2)){
	            cout<<i<<" ";
	            i--;
	        }
	        cout<<"\n";
	    }
	    else if(x!=2){
	        cout<<"YES"<<"\n";
	        cout <<(x/2)<<" ";
	        int i = 1;
	        while(i<(x/2)){
	            cout<<i<<" ";
	            i++;
	        }
	        i=x;
	        while(i>(x/2)){
	            cout<<i<<" ";
	            i--;
	        }
	        cout<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
