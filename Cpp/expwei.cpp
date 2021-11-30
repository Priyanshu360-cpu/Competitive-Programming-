#include <bits/stdc++.h> 
using namespace std; 
typedef long long int lli;

int main(){

int t;
cin>>t;
while(t--){
    lli n;
    cin>>n;
    
    lli ip =1 , iq;
    const lli mod = 998244353LL;
    if(n%2 == 0)
    
    if(n % 4 == 0){
        
        iq = 1;
        
        ip = n/4;
        ip%= mod;
        
        ip*= (n+1);
        ip%= mod;
        
        ip*= (n+1);
        ip%= mod;
    }
    
    else {
        iq = 2;
         ip = n/2;
        ip%= mod;
        
        ip*= (n+1);
        ip%= mod;
        
        ip*= (n+1);
        ip%= mod;
        
    }
    else {
        iq = 1;
        
       
        ip*= (n+1)/2;
        ip%= mod;
        
        ip*= (n+1)/2;
        ip%= mod;
        
       ip*= n;
        ip%= mod;
    }
    
    lli inv = 0;
    
    if(iq ==1){
        inv = 1;
    }
    else if(iq==2){
        inv = 499122177;
    }
    
    lli ans;
    ans = ip *inv;
    ans %= mod;
    cout<<ans<<endl;

    
}
return 0;
}
