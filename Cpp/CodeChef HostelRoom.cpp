#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main() {
 int t;
 cin>>t;
 while(t--){
     int x,y;
     cin>>x>>y;
     int a[x];
     for(int i=0;i<x;i++) cin>>a[i];
     vector<int> b;
     b.push_back(y);
     for(int i=0;i<x;i++){y=y+a[i];b.push_back(y);}
     sort(b.begin(),b.end());
     cout<<b[b.size()-1]<<"\n";
 }
	return 0;
}
