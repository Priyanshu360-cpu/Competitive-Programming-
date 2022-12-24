class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        map<int,string> a;
        for(int i=0;i<s.size();i++){
            string b="";
            b=b+s[i];
            a[i]=b;
        }
        for(int i=0;i<indices.size();i++){
            if(a[indices[i]][0]==sources[i][0]){
                int p=indices[i]+1;
                int d=0;
            for(int j=1;j<sources[i].size();j++){
                if(sources[i][j]!=a[p][0]){
                    d=1;
                    break;
                }
                p++;
            }
            if(d==0){
                for(int k=indices[i];k<p;k++){
                    a.erase(k);
                }
                a[indices[i]]=targets[i];
            }
          }
        }
        s="";
        for(auto x:a){
            s=s+x.second;
        }
        return s;
    }
};
