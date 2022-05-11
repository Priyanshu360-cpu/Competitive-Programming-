#include <iostream>
using namespace std;
int main() {
    int x;
cin>>x;
int p=x;
if(x%2!=0){
    int i=1;
	while(p>=1){
	    for(int j=1;j<=i;j++){
	        if(j==x-1-((x/2)-1)) continue;
	        cout<<j<<"\t";
	    }
	    for(int j=p-2;j>0;j--){
	        cout<<i<<"\t";
	    }
	    for(int j=i;j>0;j--){
	        cout<<j<<"\t";
	    }
	    cout<<endl;
	 p=p-2;
	 i=i+1;
}
p=p+4;
while(p!=x+2){
    for(int j=1;j<i-2;j++){
        cout<<j<<"\t";
    }
    for(int j=p-1;j>0;j--){
        cout<<i-2<<"\t";
    }
    	    for(int j=i-2;j>0;j--){
	        cout<<j<<"\t";
	    }
 p=p+2;
 i=i-1;
 cout<<endl;
}

}else{
        int i=1;
	while(p>=1){
	    for(int j=1;j<=i;j++){
	       
	        cout<<j<<"\t";
	    }
	    for(int j=p-2;j>0;j--){
	        cout<<i<<"\t";
	    }
	    for(int j=i;j>0;j--){
	        cout<<j<<"\t";
	    }
	    cout<<endl;
	 p=p-2;
	 i=i+1;
}
p=p+4;
while(p!=x+2){
    for(int j=1;j<i-2;j++){
        cout<<j<<"\t";
    }
    for(int j=p-1;j>0;j--){
        cout<<i-2<<"\t";
    }
    	    for(int j=i-2;j>0;j--){
	        cout<<j<<"\t";
	    }
 p=p+2;
 i=i-1;
 cout<<endl;
}
}
	return 0;
}
