#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int m;
    cin>>m;
    string a;
    cin>>a;
    int z=0;
    int o=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='0')z++;
        else o++;
    }
    if(m%2==0){
        if(z%2==0&&o%2==0) cout<<"Yes"<<"\n";
        else if(z==o)  cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
    else cout<<"Yes"<<"\n";
}
	return 0;
}
