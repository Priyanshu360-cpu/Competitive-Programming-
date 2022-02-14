#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    string s;
	    cin>>s;
	    int c=0;
	    int n=0;
	    for(int i=0;i<14;i++){
	        if(s[i]=='C')c=c+2;
	        if(s[i]=='N')n=n+2;
	        if(s[i]=='D'){
	            c=c+1;
	            n=n+1;
	        }
	    }
	    if(n>c) cout<<40*x<<"\n";
	    if(c>n) cout<<60*x<<"\n";
	    if(n==c) cout<<55*x<<"\n";
	}
	return 0;
}
