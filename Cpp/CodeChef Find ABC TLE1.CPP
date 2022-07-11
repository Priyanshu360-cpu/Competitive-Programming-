#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int parat(int a,int b, int c, int d){
    return ((a^d)+(b^d)+(c^d));
}
void solution(int n,vector<int>&a){
            int q=0;
      for(int i=0;i<=n;i++){
          for(int j=0;j<=n;j++){
              for(int k=0;k<=n;k++){
               q=0;     
                  for(int l=0;l<=n;l++){
                      if(parat(i,j,k,l)!=a[l]){
                          q=1;
                          break;
                      }
                  }
                  if(q==0){
                      cout<<i<<" "<<j<<" "<<k<<endl;
                      return;
                    
                  }
              }
            
          }
          
      }
      
}
int main() {
    int t;
    cin>>t;
    while(t--){
        
        int x;
        cin>>x;
        x=x+1;
        vector<int> a;
        while(x--){
            int o;
            cin>>o;
            a.push_back(o);
        }
 int n=a.size()-1;
 solution(n,a);
    }
    return 0;
}
