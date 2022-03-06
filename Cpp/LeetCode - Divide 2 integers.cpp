class Solution {
public:
    int divide(int dividend, int divisor) {
        int p=0;
        int po=0;
        int n=0;
        int sumo=0;
        
        if(divisor==1) return dividend;
        if(divisor==-1){
        if(dividend==-2147483648)return 2147483647;
            else return -dividend;
        }
        if(dividend<0){
            if(dividend==-2147483648){
                if((2147483648%2)==0){
                    sumo=1;
                }
                dividend=2147483647;
                
            }
        else
            dividend=-dividend;
            po=po+1;
        }
        if(divisor<0){
            divisor=-divisor;
            po=po+1;
        }
        for(int i=dividend;i>=divisor;i=i-divisor){p=p+1;
                                                  if(p>2147483647&&po!=1) return p;
                                                   if(p>2147483648&&po==1) return -2147483648;
                                                  }
         if(sumo==1){
            if(po==1) return -p-1;
            return p+1;
        }
        if(po==1) return -p;
       
        return p;
    }
};
