class Solution {
public:
map<char,string> a;
map<string,char> b;
    bool wordPattern(string pattern, string s) {
        s=s+" ";
        int j=0;
        int p=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                string r=s.substr(j,i-j);
                if(a.find(pattern[p])!=a.end()){
                    if(a[pattern[p]]!=r)return false;
                }else{
                    if(b.find(r)!=b.end()){
                        if(b[r]!=pattern[p])return false;
                    }
                    b[r]=pattern[p];
                    a[pattern[p]]=r;
                }
                p+=1;
                j=i+1;
            }
        }
        if(p!=pattern.size())return false;
        return true;
    }
};
