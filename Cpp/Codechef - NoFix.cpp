#include <iostream>
using namespace std;
#include <vector>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   int c;
	   int p=n;
	    vector<int> a;
	     while(n){
	         cin>>c;
	         a.push_back(c);
	         n=n-1;
	     }
	     int l=0;
	     for(int i=0;i<p;i++){
	         int h=1+i+l;
	         if(h==a[i]){
	             l++;
	         }
	     }
	    cout<<l<<"\n";
	}
	return 0;
}
