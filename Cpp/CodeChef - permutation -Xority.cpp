#include <iostream>
using namespace std;
#include <vector>
	 void permutate (vector<vector<int>>&a,vector<int> d, int reqLen, int s, int currLen, bool check[], int l) 
	 {
	       if(currLen > reqLen)
   return;
   else if (currLen == reqLen) {
     vector<int> c;
     vector<int>e;
     vector<int>f;
      for (int i = 0; i < l; i++) {
         if (check[i] == true) {
            c.push_back(d[i]);
         }
      }
      
      for (int i = 0; i < l-1; i++) {
           if (check[i] == true) {
            e.push_back(((d[i]-d[i+1])>0?(d[i+1]-d[i]):(d[i]-d[i+1])));
           }
      }
      if(false){
      for(int i=0;i<(e.size()-1);i++){
          f.push_back((e[i]^e[i+1]));
      }
      for(int i=0;i<(f.size()-1);i++){
          if(f[i]==f[i+1]){
              if(i+1==(f.size()-1)){
                  for(int j=0;j<c.size();j++){
                      cout<<c[j]<<" ";
                  }
                  cout<<"\n";
              }else continue;
          }else break;
      }
      }
      a.push_back(c);
      return ;
   }
   if (s == l) {
      return;
   }
   check[s] = true;
   permutate(a,d, reqLen, s + 1, currLen + 1, check, l);
   check[s] = false;
  permutate(a,d, reqLen, s + 1, currLen, check, l);
	    }
int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<vector<int>> a;
	    int x;
	    cin>>x;
	    bool check[x];
	    vector<int> b;
	    for(int i=1;i<=x;i++){b.push_back(i);}
	    for(int i=0;i<=x;i++) check[i]=false;
	    a.push_back(b);
	    int j;
	    for(j=1;j<=x;j++){
	    permutate(a,b,j,0,0,check,x);
	    }
	}
	return 0;
}
