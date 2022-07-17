#include <iostream>
using namespace std;
class Solution {
public:
    void solve(int* p,int n){
        if(n==0){*p=*p+1;
            return;
                }
        if(n<0) return;
        else
        if(n>=2){
            solve(p,n-2);
        }
        if(n>=1){

            solve(p,n-1);}

    }
    int climbStairs(int n){
        
        int p=0;
        solve(&p,n);

        return p;
    }
};
int main() {
	Solution* a = new Solution();
  int n;
  cin>>n;
	cout<<a->climbStairs(n);
	return 0;
}
