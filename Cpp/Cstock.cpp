#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,c,d=0;
	    double e;
	    cin>>x>>y>>c>>z;
	    if(z>0){
	        e=x+(x*(0.01*z));
	        if(e>=y&&e<=c){
	                d=1;
	        }
	    }
	    else{
	        e=x+(x*(0.01*z));
	         if(e>=y&&e<=c){
	                d=1;
	        }
	        
	    }
	    if(z==0){
	        if(x>=y&&x<=c){
	            d=1;
	        }
	    }
	    if(d==1){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	    
	    d=0;
	}
	return 0;
}
