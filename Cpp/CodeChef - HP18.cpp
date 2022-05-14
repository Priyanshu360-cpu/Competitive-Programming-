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
	    vector<int> values;
	    while(p--){
	        int y;
	        cin>>y;
	        values.push_back(y);
	    }
	    int c=1;
	    R:
for(int i=0;i<values.size();i++){
    if(c==1){
        if(values[i]%a==0){
            values[i]=1;
            c=2;
            goto R;
        }
    }
    if(c==2){
        if(values[i]%b==0){
            values[i]=1;
            c=1;
            goto R;
        }
    }
}
if(c==1) cout<<"ALICE"<<"\n";
else cout<<"BOB"<<"\n";
	    
	}
	return 0;
}
