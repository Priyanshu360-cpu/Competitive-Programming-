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
	    while(p--){
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
    int m=a[0];
    for(int i=0;i<a.size();i++){
        m=m>a[i]?m:a[i];
        vector<int> c=a;
        int p=i;
        int r=0;
        int o=0;
        L:
        for(int j=0;j<c.size();j++){
            if(i==j){continue;}
            else{
                c[j]=c[j]+1;
            }}
            auto itr=find(c.begin(),c.end(),c[i]+1);
            if(itr!=c.end()){
                i=itr-c.begin();
                r=c[itr-c.begin()];
                o=o+1;
                goto L;
            }else continue;
        m=m>r?m:r;
                    i=p;
    }
	   cout<<m<<endl;
	}
	return 0;
}
