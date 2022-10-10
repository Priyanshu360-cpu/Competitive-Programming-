class Solution {
public:
    int solution(long long dividend,long long divisor,int p){
        int l=0;
        while(dividend-divisor>=0){
            dividend-=divisor;
            l+=1;
            if(p==0&&l==2147483647)return l;
            if(p==1&&l==2147483648)return l;
        }
        return l;
    }
    int divide(long long dividend, long long divisor) {
        if(divisor==1) return dividend;
        if(divisor==-1){
            if (dividend<0){
                if(-dividend>=2147483648)
                    return 2147483647;
            }else{
                return -dividend;
            }
        }
        if(dividend<0&&divisor<0){
            return solution(-dividend,-divisor,0);
        }else if(divisor<0||dividend<0){
            if(divisor<0){
                return -solution(dividend,-divisor,1);
            }else return -solution(-dividend,divisor,1);
        }else return solution(dividend,divisor,0);
    }
};
