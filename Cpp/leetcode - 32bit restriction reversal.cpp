class Solution {
public:
    int reverse(int x) {
        int gh;
        gh=x<=-2147483648||x>=2147483647?1:2;
        if(gh==1){cout<<"here";return 0;}
         long long int g=x>0?1:2;
        x=x>0?x:-x;
         long long int rev=0;
         long long int d=x;
          long long int c=0;
        while(d){
            d=d/10;c=c+1;
        }
        long long int l=1;
        if(x%10>2&&c>=10&&g!=2){ cout<<"here";return 0;}
        while(c){
            c=c-1;
            l=l*10;
        }
        d=x;
        while(d){
            l=l/10;
            rev=rev+((d%10)*l);
            rev=rev<=2147483647||rev>=-2147483648?rev:0;
            
            d=d/10;
        }
        
  rev=g==1?rev:-rev;
        rev=rev<=2147483647&&rev>=-2147483648?rev:0;
        return rev;
    }
};
