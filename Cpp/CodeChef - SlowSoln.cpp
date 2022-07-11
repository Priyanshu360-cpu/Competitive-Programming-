#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a;
	    cin>>b;
	    cin>>c;
	    int h=b;
	    int l=0;
	    for(int i=0;i<min(a,c/b);i++){
	        l=l+(h*h);
	    }
	  if((c/b)+1<=a){
	      l=l+((c-((c/b)*b))*( c-((c/b)*b)));
	  }
	    cout<<l<<endl;
	}
	return 0;
}
