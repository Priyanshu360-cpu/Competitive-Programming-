class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x<10)
            return true;
        unsigned long long int s=x;
         unsigned long long int c=0;
        while(s){
            s=s/10;
            c=c+1;
        }
        s=x;
        unsigned long long int d=10;
        for(int i=1;i<c-1;i++){
            d=d*10;
        }
         unsigned long long int e=0;
        while(s!=0&&d!=0){
            e=e+((s%10)*d);
s=s/10;
            d=d/10;
        }
        if(e==x)
        return true;
        else
            return false;
    }
    
};
