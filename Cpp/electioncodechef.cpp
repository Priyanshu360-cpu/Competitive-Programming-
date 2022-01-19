#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x,y,z;
	while(t--){
	cin>>x>>y>>z;
	if(x>50) cout<<"A ";
	else if(y>50) cout<<"B ";
	else if(z>50) cout<<"C ";
	else cout<<"NOTA";
	cout<<"\n";
	}
	return 0;
}
