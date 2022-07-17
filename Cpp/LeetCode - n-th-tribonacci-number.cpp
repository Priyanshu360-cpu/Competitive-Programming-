class Solution {
public:
    void tribonac(int* a,int* b,int* c,int n,int h){
        int k=*a+*b;
        *a=*b;
        *b=*c;
        *c=k+*c;
        if(n<h) tribonac(a,b,c,n+1,h);
         else return;
    }
    int tribonacci(int n) {
        int a=0,b=1,c=1;
        if(n==0)return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        tribonac(&a,&b,&c,3,n);
        return c;
    }
};
