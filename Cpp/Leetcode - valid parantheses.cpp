class Solution {
public:
    bool isValid(string s) {
        int b=0,c=0;
        char d='a';
        vector <char> l;//store things in vector then pop back
        for(int i=0;i<s.size();i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
                d=s[i];
            }
            if((s[i]=='}'||s[i]==')'||s[i]==']')&&(d=='a')) return false;
             if(s[i]=='}'||s[i]==')'||s[i]==']'){
               if((d=='{')&&(s[i]!='}')){
                   return false;
               }
               if((d=='[')&&(s[i]!=']')){
                   return false;
               }
                 if((d=='(')&&(s[i]!=')')){
                   return false;
               }
             }
}
        return true;
    }
};
