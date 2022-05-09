#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    vector<int> a;
	    while(x--){
	        int y;
	        cin>>y;
	        a.push_back(y);
	    }
	  
	    sort(a.begin(),a.end());
	    vector<int> b;
	    cout<<"here"<<endl;
	    for(int i=0;i<a.size();i++){
	        for(int j=0;j<a.size();j++){
	            if(j==i) continue;
	            b.push_back(a[j]-a[i]>0?(a[j]-a[i]):(a[i]-a[j]));
	        }
	    }
	    int p=*max_element(b.begin(),b.end());
	    int s=0;
	    for(int i=0;i<b.size();i++){
	        if(b[i]!=p){
	            s=s+1;
	        }
	    }
	}
	return 0;
}
