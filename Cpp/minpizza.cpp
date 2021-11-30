#include <iostream>
using namespace std;
long long gcd(long long int a,long long int b){
    if(b==0)
      return a;
    return gcd(b,a%b);
}
long long lcm(int a,int b){
    return (a/(gcd(a,b)))*b;
}
signed main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int rep = lcm(n,k)/k;
        cout<<rep<<"\n";
    }
}
