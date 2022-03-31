class Solution {
public:
    string reverseWords(string s) {
        string d="";
        vector<string> g;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(d=="")continue;
                g.push_back(d);
                d="";
                continue;
            }
            d=d+s[i];
            if(i==s.size()-1)g.push_back(d);
        }
        d="";
        for(int i=g.size()-1;i>=0;i--){
            if(i==0)d=d+g[i];       
            else d=d+g[i]+" ";
        }
        return d;
    }
};
