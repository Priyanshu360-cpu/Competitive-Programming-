#include <iostream>
using namespace std;
#define ll long long
int main() {
     ll t;
    cin>>t;
    while(t--){
        ll x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        while(k--)
        {
            x=x+a;
            y=y+b;
        }
        if(x>y){
            cout<<"DIESEL\n";
        }
        else if(x==y){
            cout<<"SAME PRICE\n";
        }
        else{
            cout<<"PETROL\n";
        }
    }
    
	return 0;
}
