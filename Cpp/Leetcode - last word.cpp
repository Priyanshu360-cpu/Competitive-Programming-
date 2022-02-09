class Solution {
public:
    int lengthOfLastWord(string s) {
        int b=0;
        int d=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '&&b!=1){
                s.pop_back();
                continue;
            }
            if(s[i]==' '&&b==1){
               break;
            }
            b=1;
            d=d+1;
            s.pop_back();
        }
        return d;
    }
};
