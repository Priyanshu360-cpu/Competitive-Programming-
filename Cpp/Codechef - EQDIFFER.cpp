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
	    if(a.size()==1) cout<<a[0]<<endl;
	   else{
	    if(a.size()==2) cout<<0<<endl;
	    else{
	    sort(a.begin(),a.end());
	    vector<int> b;
	    for(int i=0;i<a.size()-1;i++){
	        b.push_back(a[i+1]-a[i]);
	    }
	    int m=0; 
	    	    sort(b.begin(),b.end());
	    for(int i=0;i<b.size();i++){ 
	        int p=0;
	        for(int j=i+1;j<b.size();j++){
	            if(a[i]==a[j]) p=p+1;
	            else{
	                i==j;
	                break;
	            }
	        }
	        if(p>m)m=p;
	    } 
	    cout<<b.size()-m<<endl;
	}
	   }
	}
	return 0;
}
