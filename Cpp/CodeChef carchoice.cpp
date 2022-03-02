#include <iostream>
using namespace std;
#include<vector>
int main() {
	float t;
	cin>>t;
	while(t--){
	    vector<float> a;
	    for(int i=0;i<4;i++){
	        float y;
	        cin>>y;
	        a.push_back(y);
	    }
	    float x1=a[0];
	    float x2=a[1];
	    float y1=a[2];
	    float y2=a[3];
	    if((y1/x1)>(y2/x2)) cout<<1<<"\n";
	    else if((y1/x1)<(y2/x2)) cout<<-1<<"\n";
	    else cout<<0<<"\n";
	}
	return 0;
}
