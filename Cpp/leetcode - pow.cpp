class Solution {
public:
    double myPow(double x, int n) {
        int ne=0;
        double d=x;
        unsigned int g=n;
        double def=1;
        if(x==def) return x;
        if(n==0) return def;
       if(n<0)g=-g;
        for(int i=1;i<g;i++){
            x=x*d;
        }
        if(r>0)return x;
        else return 1/x;
    }
};
