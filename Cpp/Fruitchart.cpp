#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
int x,y;
cin>>x>>y;
if(x%2!=0)x=x-1;
int a=x>=y?x:y;
int g=0;
int z=0;

for(int i=0;i<a;i++){
    if(g>=x||z>=y)break;
    g=g+2;
    z=z+1;
}
cout<<z<<"\n";
}


	return 0;
}
