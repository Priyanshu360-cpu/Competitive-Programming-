class Solution {
public:
    int myAtoi(string s) {
        long long int r=0;
        int g=0;
        int d=0;
        int m=0;
        int o=0;
        for(int i=0;i<s.size();i++){
            int a=s[i];
            
            int b=s[i+1];
           if(a==32){
               d=d==1?0:0;
               if(m==1) break;
               continue;
           }
            if(a==45)g=g+1;
            if(g>1) break;
            if(g>=1&&a==43) break;
            if(a==45&&(!b)){g=0;break;}
            if(a==43&&(b==43)){o=1;continue;}
             if(a==43&&(b>=48&&b<=57)&&(o==1)){break;}
            if(a==43&&!(b)){break;}
            if(!(a>=48&&a<=57||a==45||a==43)) break;
            if(a==45&&!(b>=48&&b<=57)) return 0;
            if(a==43&&!(b>=48&&b<=57)) return 0;
            if(d==1&&!(a>=48&&a<=57)) return 0;
            
            if(a>=48&&a<=57){
                m=1;
                d=1;
                 if(g>=1&&r>2147483648) return -2147483648;
                if(r>2147483647) return 2147483647;
               
                switch(a){
                    case 48:
                      r=(r*10)+0;
                      break;
                    case 49:
                       r=(r*10)+1;break;
                    case 50:
                        r=(r*10)+2;break;
                     case 51:
                        r=(r*10)+3;break;
                     case 52:
                        r=(r*10)+4;break;
                    case 53:
                        r=(r*10)+5;break;
                    case 54:
                        r=(r*10)+6;break;
                    case 55:
                        r=(r*10)+7;break;
                    case 56:
                        r=(r*10)+8;break;
                    case 57:
                        r=(r*10)+9;break;
                    default:
                      break;
                }
            }
        }
        r=(g>=1&&r>2147483648)?2147483648:r;
        r=g>=1?-r:r;
        r=r>2147483647?2147483647:r;
        
     return r;   
    }
};
