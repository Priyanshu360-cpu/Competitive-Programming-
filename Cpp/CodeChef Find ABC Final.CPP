#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int sol(int n){
    int r=0;
    for(int p=n;p>=1;p--){
        if((p & (p-1))==0){
            r=p;
            break;
        }
    }
    return r;
}
int main() {
    int t;
    cin>>t;
    while(t--){
       int x;
       cin>>x;
       int n=x;
      vector<int> a;
      for(int i=0;i<=n;i++){
          int o;
          cin>>o;
          a.push_back(o);
      }
       vector<int> p;
       p.push_back(0);
       p.push_back(0);
       p.push_back(0);
       for(int j=sol(n);j>0;j=j/2){
           long d=a[j]-a[0];
           if(d<0){
               d=d*-1;
               int c=d/j;
               if(c==1){
                   c=2;
                   if((p[0]^j)<=n){
                       p[0]=p[0]^j;
                       c=c-1;
                   }
                   if(c&&(p[1]^j)<=n){
                       p[1]=p[1]^j;
                       c=c-1;
                   }
                   if(c>0&&(p[2]^j)<=n){
                       p[2]=p[2]^j;
                   }
               }
               else if(c==3){
            p[0]=p[0]^j;
                   p[1]=p[1]^j;
                   p[2]=p[2]^j;
               }
           }
           else{
               int c=d/j;
               if(c==1){
                   if((p[0]^j)<=n) p[0]=p[0]^j;
                   else if ((p[1]^j)<=n)p[1]=p[1]^j;
                   else p[2]=p[2]^j;
               }
           }
           sort(p.begin(),p.end());
       }
       cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<endl;
        }
    return 0;
}
