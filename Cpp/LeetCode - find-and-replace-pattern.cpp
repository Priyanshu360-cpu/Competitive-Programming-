class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> a;
        for(int i=0;i<words.size();i++){
        if(words[i].size()!=pattern.size())continue;
         map<char,char> b;
         map<char,char> c;
            int g=0;
            for(int j=0;j<words[i].size();j++){
                if(b.find(pattern[j])!=b.end()){
                    if(b[pattern[j]]!=words[i][j]){
                        g=1;
                        break;
                    }
                } 
                else if(c.find(words[i][j])!=c.end()){
                     if(c[words[i][j]]!=pattern[j]){
                        g=1;
                        break;
                     }
                }
                else{
                    c[words[i][j]]=pattern[j];
                    b[pattern[j]]=words[i][j];
                }
            }
            if(g==0)a.push_back(words[i]);
        }
        return a;
    }
};
