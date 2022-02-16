#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    int s=0;
	    cin>>n>>x>>y;
	    int l=0;
	   while(n>100){
	       l=l+1;
	       n=n-100;
	   }
	   for(int i=0;i<l;i++){
	       if(x<(y*25)) s=s+x;
	       else s=s+(25*y);
	   }
	   if(n%4!=0){
	       int g=n/4;
	       g=g*4;
	       int p=n-g;
	       p=4-p;
	       n=n+p;
	   }
	   if(x<(y*(n/4))) s=s+x;
	   else s=s+(y*(n/4));
	   cout<<s<<"\n";
	}
	return 0;
}
