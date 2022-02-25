class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> b;
        vector<string> c;
        
        for(int i=0;i<digits.size();i++){
            switch(digits[i]){
                case '2':
                    b.push_back("abc");
                    break;
                case '3':
                    b.push_back("def");
                    break;
                case '4':
                    b.push_back("ghi");
                    break;
                case '5':
                    b.push_back("jkl");
                    break;
                case '6':
                    b.push_back("mno");
                    break;
                case '7':
                    b.push_back("pqrs");
                    break;
                case '8':
                    b.push_back("tuv");
                    break;
                case '9':
                    b.push_back("wxyz");
                    break;
                default:
                    break;
            }
        }
for(int i=0;i<b.size()-1;i++){
string s ="";
 for(int j=i;j<b[j].size();j++){
     for(int m=i;m<b.size();m++){
         for(int n=i;n<b[m].size();n++){
             s=s+b[j]+b[n];
         }
     }
 }
     c.push_back(s)
 }
        }
        return c;
    }
};
