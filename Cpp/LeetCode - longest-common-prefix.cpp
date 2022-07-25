class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
sort(strs.begin(),strs.end());
        if(strs[0].size()==0)return strs[0];
            string s="";
            char x=strs[0][0];
            int p=0;
            L:
            for(int j=1;j<strs.size();j++){
                if(strs[j][p]!=x){
                    return s;
                }
            }
            s=s+strs[0][p];
            p=p+1;
            if(p<strs[0].size()){
                x=strs[0][p];
                goto L;
            }
        return s;
    }
};
