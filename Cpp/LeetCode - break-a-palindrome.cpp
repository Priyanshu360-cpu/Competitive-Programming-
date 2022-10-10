class Solution {
public:
    bool isplaindrome(string p){
        string r=p;
        reverse(r.begin(),r.end());
        return r==p;
    }
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1)return "";
        for(int i=0;i<palindrome.size();i++){
            if(palindrome[i]>97){
                char b=palindrome[i];
                palindrome[i]='a';
                if(!isplaindrome(palindrome)){
                 return palindrome;
                }
                palindrome[i]=b;
            }
        }
            palindrome[palindrome.size()-1]='b';
            return palindrome;
    }
};
