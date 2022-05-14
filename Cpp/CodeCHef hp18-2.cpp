#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>;

int main() {
	int x;
	cin>>x;
	while(x--){
	    int p,a,b;
	    cin>>p>>a>>b;
	    if(a==b){
	        cout<<"ALICE"<<endl;
	    }else{
	    vector<int> values;
	    while(p--){
	        int y;
	        cin>>y;
	        values.push_back(y);
	    }
int r=0,q=0;
for(int i=0;i<values.size();i++){
    if(values[i]%a==0) r=r+1;
    if(values[i]%b==0) q=q+1;
}
if(q>r) cout<<"ALICE"<<"\n";
else cout<<"BOB"<<"\n";
	    }
	}
	return 0;
}
