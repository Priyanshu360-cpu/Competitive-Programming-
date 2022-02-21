class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()==0&&needle.size()==0) return 0;
        if(needle.size()==0) return 0;
        for(int i=0;i<haystack.size();i++){
            string test="";
            int p=0;
            if(haystack[i]==needle[0]&&i+needle.size()<=haystack.size()&&((haystack[i+needle.size()-1]==needle[needle.size()-1]))){
                for(int j=i;j<i+needle.size()&&(i+needle.size()<=haystack.size());j++){
                    if(haystack[j]==needle[p]){
                        p=p+1;
                        test=test+haystack[j];
                    }
                    if(test==needle) return i;
                }
            }
        }
        return -1;
    }
};
