class Solution {
public:
    int c=0;
 int ha(int a,int b,int h, int l){
     if(h>l){
         return c;
     }else{
         h=h+1;
          c=a+b;
         a=b;
         b=c;
         ha(a,b,h,l);
     }
     return c;
 }
    int fib(int n) {
        if(n==1) return 1;
        int k=ha(0,1,2,n);
        return k;
    }
};
