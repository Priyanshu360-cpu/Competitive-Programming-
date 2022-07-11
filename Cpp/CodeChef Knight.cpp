#include <iostream>
using namespace std;
#include <vector>
     
int main() {
    vector<vector<int>>c;
    vector<vector<int>>d;
    c.insert(c.end(),{{1,1},{1,3},{1,5},{1,7},{2,2},{2,4},{2,6},{2,8},{3,1},{3,3},{3,5},{3,7},{4,2},{
        4,4},{4,6},{4,8},{5,1},{5,3},{5,5},{5,7},{6,2},{6,4},{6,6},{6,8},{7,1},{7,3},{7,5},{7,7},{8,2},
        {8,4},{8,6},{8,8}});
    d.insert(d.end(),{{1,2},{1,4},{1,6},{1,8},{2,1},{2,3},{2,5},{2,7},{3,2},{3,4},{3,6},{3,8},{4,1},
        {4,3},{4,5},{4,7},{5,2},{5,4},{5,6},{5,8},{6,1},{6,3},{6,5},{6,7},{7,2},{7,4},{7,6},{7,8},{8,1}
        ,{8,3},{8,5},{8,7}
    });
   int t;
   cin>>t;
   while(t--){
       int a,b,e,f;
       vector<int> g;
       vector<int> h;
       cin>>a;
       cin>>b;
       cin>>e;
       cin>>f;
       g.push_back(a);
       g.push_back(b);
       h.push_back(e);
       h.push_back(f);
       int l=0;
       for(auto x:c){
           if(x==g){
               int m=0;
               for(auto y:c){
                   if(y==h){
                       m=1;break;
                   }
               }
               if(m==1) cout<<"YES"<<endl;
               else cout<<"NO"<<endl;
               l=1;
               break;
           }
       }
       if(l==0){
           int m=0;
           for(auto x:d){
               if(x==h){
                   m=1;
                   break;
               }
           }
           if(m==1) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }

   }
	return 0;
}
