class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> a;
        if(s.size()==1) return 1;
       for(int i=0;i<s.size();i++){
           for(int j=i+1;j<s.size();j++){
               if(s[i]==s[j]){
                   a.push_back(j-i);
                   break;
               }
           }           
       }
                   sort(a.begin(),a.end());
        return a[a.size()-1];

    }
};
