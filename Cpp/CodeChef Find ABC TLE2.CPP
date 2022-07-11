#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int parat(int a,int b, int c, int d){
    return ((a^d)+(b^d)+(c^d));
}
int r=0;
void solution(int a,int b, int c,vector<int>&d){
    if(a>d.size()-1) return;
    if(b>d.size()-1) return;
    if(c>d.size()-1) return;
    if(r==1) return;
            for(int i=0;i<d.size();i++){
                if(parat(a,b,c,i)<d[i]){
                    solution(a,b+1,c,d);
                   solution(a+1,b,c,d);
                   solution(a,b,c+1,d);
                }
                if(parat(a,b,c,i)!=d[i]) return;
            }
            r=1;
            cout<<a<<" "<<b<<" "<<c<<endl;
      }
      
int main() {
    int t;
    cin>>t;
    while(t--){
        r=0;
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
 solution(0,0,0,a);
    }
    return 0;
}
