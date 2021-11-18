#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll x,y;
	    cin>>x>>y;
	    cout<<x*2<<" "<<((x*y)-1)*(x*y)<<endl;
	}
	return 0;
}