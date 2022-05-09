#include <iostream>
using namespace std;
#include <algorithm>
int main() {
int t;
cin>>t;
while(t--){
    vector<int> a;
    int x;
    cin>>x;
    while(x--){
        int y;
        cin>>y;
        a.push_back(y);
    }
    sort(a.begin(),a.end());
    int p=0;
L:
    for(int i=0;i<a.size();i++){
        if(a[i]<=a[i]+1){
            a[i]=a[i]+1;
            p=p+1;
                cout<<a[i];
            goto L;
        }else{
            continue;
        }
    }
    if(p%2==0) cout<<"Second"<<endl;
    else cout<<"First"<<endl;
}
	return 0;
}
