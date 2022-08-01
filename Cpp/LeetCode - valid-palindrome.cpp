class Solution {
public:
    bool isPalindrome(string s) {
           transform(s.begin(), s.end(), s.begin(), ::tolower);
                string d="";
         for(int i=0;i<s.size();i++){
             if(((int)s[i]>=97&&(int)s[i]<=122)||((int)s[i]>=48&&(int)s[i]<=57)){
                 d=d+s[i];
             }
         }
        s=d;
        reverse(s.begin(),s.end());
        return d==s;
    }
};
