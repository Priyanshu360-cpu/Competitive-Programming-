#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int u=1;
    while(t--){
    cout<<"Case #"<<u<<":"<<"\n";
    u=u+1;
    int x,y;
	cin>>x>>y;
	cout<<"..+";
	for(int i=0;i<y-1;i++)cout<<"-+";
	cout<<"\n";
	cout<<"..|";
	for(int i=0;i<y-1;i++)cout<<".|";
	cout<<"\n";
	int z=(2*x)-1;
	for(int i=1;i<=z;i++){
	    if(i%2!=0){
	        cout<<"+";
	        for(int j=0;j<y;j++)cout<<"-+";
	        cout<<"\n";
	    }else{
	        cout<<"|";
	        for(int j=0;j<y;j++)cout<<".|";
	        cout<<"\n";
	    }
	}
    }
	return 0;
}
