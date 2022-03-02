#include <iostream>
using namespace std;
#include <vector>
int main() {
	int t;
	cin>>t;
	int ab[8]={6,13,20,27,7,14,21,28};
	while(t--){
	    int h;
	    cin>>h;
	    vector<int> a;
	    while(h--){
	        int l;
	        cin>>l;
	        a.push_back(l);
	    }
	    int c=8+a.size();
	    for(int i=0;i<a.size();i++){
	        for(int j=0;j<8;j++){
	            if(a[i]==ab[j]){c=c-1;}
	        }
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
