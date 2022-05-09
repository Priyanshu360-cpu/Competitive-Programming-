#include <iostream>
using namespace std;
#include <algorithm>

#include <vector>
int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<int> a;
	    int p;
	    cin>>p;
	    int s=p;
	    while(p--){
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	     if(s==1){
	        cout<<a[0];
	    }else{
	        	   sort(a.begin(),a.end());

	   int m=0;
	   int p=0;
	    for(int i=a.size()-1;i>0;i--){
	        if(a[i]==a[i-1]){
	            p=p+1;
	        }else{
	            m=m<a[i]+p?a[i]+p:m;
	            p=0;
	        }
	    }
	        cout<<m<<endl;
	    }
	    
	}
	return 0;
}
