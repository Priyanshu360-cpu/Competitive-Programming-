class Solution {
public:
    int mySqrt(int x) {long long int n=1;
        while(n*n<=x) n=n+1;
        return n-1;
    }
};
