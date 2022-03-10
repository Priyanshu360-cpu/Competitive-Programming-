class Solution {
public:
    int uniquePaths(int m, int n) {
        int a=0;
        for(int i=0;i<n-1;i++){
            a=i+a+(m-1);
            if(i==0)a=a+1;
            cout<<a<<"\n";
        }
        return a;
        
    }
};
