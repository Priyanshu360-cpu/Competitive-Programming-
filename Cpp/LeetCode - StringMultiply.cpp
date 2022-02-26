class Solution {
public:
    string multiply(string num1, string num2) {
        long long int n1=0;
        long long int n2=0;
        for(int i=0;i<num1.size();i++){
            switch(num1[i]){
                case '0':
                    n1=n1*10+0;
                    break;
                case '1':
                    n1=n1*10+1;
                    break;
                case '2':
                    n1=n1*10+2;
                    break;
                case '3':
                    n1=n1*10+3;
                    break;
                case '4':
                    n1=n1*10+4;
                    break;
                case '5':
                    n1=n1*10+5;
                    break;
                case '6':
                    n1=n1*10+6;
                    break;
                case '7':
                    n1=n1*10+7;
                    break;
                case '8':
                    n1=n1*10+8;
                    break;
                case '9':
                    n1=n1*10+9;
                    break;
            }
            
        }
         for(int i=0;i<num2.size();i++){
            switch(num2[i]){
                case '0':
                    n2=n2*10+0;
                    break;
                case '1':
                    n2=n2*10+1;
                    break;
                case '2':
                    n2=n2*10+2;
                    break;
                case '3':
                    n2=n2*10+3;
                    break;
                case '4':
                    n2=n2*10+4;
                    break;
                case '5':
                    n2=n2*10+5;
                    break;
                case '6':
                    n2=n2*10+6;
                    break;
                case '7':
                    n2=n2*10+7;
                    break;
                case '8':
                    n2=n2*10+8;
                    break;
                case '9':
                    n2=n2*10+9;
                    break;
            }
            
        }
        stringstream ss;  
  ss<<n1*n2;  
  string s;  
  ss>>s;  
        return s;
    }
};
