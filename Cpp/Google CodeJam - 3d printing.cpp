#include <iostream>
#include <vector>
using namespace std;
int main() {
	int x;
	int u=1;
	cin>>x;
	while(x--){
cout<<"Case #"<<u<<": ";
u=u+1;
vector<vector<int>> a;
int j=3;
while(j--){
	    vector<int> b;
	    for(int i=0;i<4;i++){
	        int o;
	        cin>>o;
	        b.push_back(o);
	    }
	    a.push_back(b);
	}
	vector<int> c;
	for(int i=0;i<4;i++){
	    int m=a[0][i];
	    for(int j=0;j<3;j++){
	        if(m>a[j][i])m=a[j][i];
	    }
	    c.push_back(m);
	}
	if(c[0]+c[1]+c[2]+c[3]<1000000){
	    cout<<"IMPOSSIBLE\n";
	}else{
	while(c[0]+c[1]+c[2]+c[3]!=1000000){
	    if(c[0]>0){c[0]=c[0]-1;
	}else if(c[1]>0){c[1]=c[1]-1;
	}else if(c[2]>0){c[2]=c[2]-1;
	}else if(c[3]>0){c[3]=c[3]-1;
	}
	}
	for(int i=0;i<c.size();i++) cout<<c[i]<<" ";
	cout<<"\n";
	}
	}
	return 0;
}
