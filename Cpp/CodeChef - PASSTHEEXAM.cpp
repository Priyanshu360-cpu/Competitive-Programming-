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
	   if(a<10||b<10||c<10||a+b+c<100){
	       cout<<"FAIL"<<endl;
	   }else{
	       cout<<"PASS"<<endl;
	   }
	}
	return 0;
}
