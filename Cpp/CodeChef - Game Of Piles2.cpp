#include <iostream>
using namespace std;
#include <vector>
int solution(vector<int>& a){
    int od=0,tp=0,op=0,sp=0,pe=0;
    for(auto x:a){
        if (x==1)op=op+1;
        else 
        {if (x==2)tp=tp+1;
        sp=sp+x;
        pe=pe+1;
        if(x&1)od=od+1;}
    }
    if(op==1){
    if(!(od&1)) return 0;
    if(tp==0) return 1;
    sp=sp-2;
    pe=pe-1;
    if((sp-pe)&1) return 1;
    else return 0;
    }
    if(op>1){
        if((sp-pe)&1) return 0;
        else return 1;
        
    }
    if(od&1){
        return 0;
        }else return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    vector<int> a;
	    while(x--){
	        int o;
	        cin>>o;
	        a.push_back(o);
	    }
	    cout<<(solution(a)==0?"CHEF":"CHEFINA")<<endl;
	}
	return 0;
}
