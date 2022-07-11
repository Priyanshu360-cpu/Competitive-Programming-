#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    vector<int> a;
	    cin>>x;
	    while(x--){
	        int o;
	        cin>>o;
	        a.push_back(o);
	    }
	    int l=0;
	    sort(a.begin(),a.end());
	    
	    for(int i=0;i<a.size();i++){
	        if(a[i]==2&&l==0)l=l+1;
	        if(l==0){
	        while(a[i]>2){
	            l=l+1;
	            a[i]=a[i]-1;
	        }
	        }else{
	            while(a[i]>3){
	            l=l+1;
	            a[i]=a[i]-1;
	        }
	        }
	    }
	   l=l+1;
	   if (a[0]==1&&a[1]>1&&a[a.size()-1]>=2)l=l+3;
	    if(l%2==0) cout<<"CHEFINA"<<endl;
	    else cout<<"CHEF"<<endl;
	}
	return 0;
}
