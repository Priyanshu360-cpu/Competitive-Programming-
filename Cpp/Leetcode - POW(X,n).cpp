class Solution {
public:
    double myPow(double x, int n) {
 return x<0?(n%2==0?(exp(n*log(-x))):-exp(n*log(-x))):exp(n*log(x));
    }
};
