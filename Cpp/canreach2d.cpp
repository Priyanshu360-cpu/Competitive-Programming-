#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,k;
	    cin>>x>>y>>k;
	    int a = 0,b=0;
	    if(x<0){
	        while(a>x){
	            a=a-k;
	        }
	    }
	    if(x>0){
	        while(a<x){
	            a=a+k;
	    }
	    
	    }
	     if(y<0){
	        while(b>y){
	            b=b-k;
	        }
	    }
	    if(y>0){
	        while(b<y){
	            b=b+k;
	    }
	    
	}
	if(a==x&&b==y){
	    cout<<"YES\n";
	}
	else{
	    cout<<"NO\n";
	}
	}
	
return 0;
}
