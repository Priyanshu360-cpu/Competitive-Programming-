#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    vector<char> a;
	    vector<char> b;
	    int be=0;
	    int e=(2*x)-1;
	    for(int i=0;i<x;i++){int g;cin>>g;a.push_back(g);};
	    for(int i=0;i<x;i++){int g;cin>>g;b.push_back(g);};
	    char c[2*x];
	   
	    while(x){
	        int low=a[a.size()-1];
	        int l=0;
	        for(int i=0;i<a.size()-1;i++){
	            int hh=a[i];
	            if(hh<low){
	                l=hh;
	                break;
	            }
	        }
	        if(l==0){
	            c[be]=a[a.size()-1];
	            be=be+1;
	            a.pop_back();
	        }else{
	            c[e]=a[a.size()-1];
	            e=e-1;
	            a.pop_back();
	        }
	        int high=b[b.size()-1];
	        int h=0;
	        for(int i=0;i<b.size()-1;i++){
	            int ll=b[i];
	            if(ll>high){
	                h=ll;
	                break;
	            }
	        }
	        if(h==0){
	            c[e]=b[b.size()-1];
	           
	            e=e-1;
	            b.pop_back();
	        }
	        else{
	            c[be]=b[b.size()-1];
	            be=be+1;
	            b.pop_back();
	        }
	        x=x-1;
	    }
printf("%s\n",c);
	}
	return 0;
}
