
#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll t;
    cin>>t;
    while(t--){
        ll n;
        int x = 0;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        { cin >> a[i];}
        for(ll i=0;i<n;i++)
        {
            if(a[i]%2==1){
                x = x+1;
            }
        
        }
        cout<<x/2<<"\n";
        x = 0;
    }
	return 0;
}