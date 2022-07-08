#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
    int t;
    cin>>t;
    while(t--){
        int s=0;
        int h;
        cin>>h;
        vector<int> a;
        while(h--){
            int p;
            cin>>p;
            a.push_back(p);
        }
for(int i=0;i<a.size();i++){
    
    if(a[i]!=i+1){
        int o=a[a[i]-1];
        s=s+a[i]-(i+1);
        a[a[i]-1]=a[i];
        a[i]=o;
        i=0;
    }
}
cout<<s<<endl;
    }
	return 0;
}
