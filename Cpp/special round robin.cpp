#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int a;
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll x,y;
	    cin>>x>>y;
	    a = (2*x-y-1)/2;
        a*=2;
        cout<<a<<endl;
	}
	return 0;
}