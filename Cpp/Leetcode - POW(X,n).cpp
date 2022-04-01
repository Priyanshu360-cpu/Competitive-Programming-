class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(x==1) return 1;
        int u=0;
        double z=x;
        if(n<0){
            n=-n;
            u=1;
        }
        for(int i=0;i<n-1;i++)x=x*z;
        if(u==1) return 1/x;
        else return x;
    }
};
