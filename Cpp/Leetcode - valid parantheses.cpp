class Solution {
public:
    bool isValid(string s) {
        int b=0,c=0;
        vector <char> d;
        d.push_back('a');
        for(int i=0;i<s.size();i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
                d.push_back(s[i]);
            }
            if((s[i]=='}'||s[i]==')'||s[i]==']')&&(d[d.size()-1]=='a')) return false;
             if(s[i]=='}'||s[i]==')'||s[i]==']'){
               if((d[d.size()-1]=='{')&&(s[i]!='}')){
                   return false;
               }
               if((d[d.size()-1]=='[')&&(s[i]!=']')){
                   return false;
               }
                 if((d[d.size()-1]=='(')&&(s[i]!=')')){
                   return false;
               }
                 d.pop_back();
             }
}
        return true;
    }
};
