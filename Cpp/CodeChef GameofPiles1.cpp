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
    vector<int> p;
    while(x--){
        int o;
        cin>>o;
        p.push_back(o);
    }
    sort(p.begin(),p.end());
    if(p[0]==1) cout<<"CHEF"<<endl;
    else{
    int l=1;
    for(int i=0;i<p.size();i++){
        if(p[i]>2){
            while(p[i]>2){
                p[i]=p[i]-1;
                l=l+1;
            }
        }
    }
    l=l+1;
    if(l%2==0) cout<<"CHEFINA"<<endl;
    else cout<<"CHEF"<<endl;
    }
}
	return 0;
}
