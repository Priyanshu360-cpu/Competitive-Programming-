class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int b=0;
        for(int i=0;i<s.size();i++){
                   vector<char> a;
            vector<char>::iterator it;
            a.push_back(s[i]);
            for(int j=i+1;j<s.size();j++){
                it=find(a.begin(),a.end(),s[j]);
                if(it!=a.end())break;
                else a.push_back(s[j]);
            }
            b=b>a.size()?b:a.size();
        }
        return b;

    }
};
