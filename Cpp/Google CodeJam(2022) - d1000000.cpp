#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main() {
	int x;
	cin>>x;
	int u=1;
	while(x--){
	    int y;
	    cin>>y;
	    cout<<"Case #"<<u<<": ";
	    u=u+1;
	    vector<int> a;
	    vector<vector<int>> b;
	    while(y--){
	        int o;
	        cin>>o;
	        a.push_back(o);
	    }
	    sort(a.begin(),a.end());
	    for(int i=0;i<a.size();i++){
	        vector<int> c;
	        int h=a[i];
	        c.push_back(h);
	        while(h!=0){c.push_back(h);h=h-1;}
	        sort(c.begin(),c.end());
	        b.push_back(c);
	    }
	    vector<int> d;
	    d.push_back(1);
	    for(int i=1;i<b.size();i++){
	        int k=0;
	        for(int j=1;j<b[i].size();j++){
	            if(k==1)break;
	            for(int q=0;q<d.size();q++){
	                if(find(d.begin(), d.end(), b[i][j]) != d.end()){
	                    continue;
	                }else{
	                    d.push_back(b[i][j]);
	                    k=1;
	                    break;
	                }
	            }
	        }
	    }
	    cout<<d.size()<<"\n";
	}
	return 0;
}
