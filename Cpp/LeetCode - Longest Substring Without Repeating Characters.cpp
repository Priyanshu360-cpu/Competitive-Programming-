class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> a;
       
       for(int i=0;i<s.size();i++){
           for(int j=i+1;j<s.size();j++){
               if(s[i]==s[j]){
                   a.push_back(j-i);
                   break;
               }
           }           
       }
                if (a.size()==0) return s.size();

                   sort(a.begin(),a.end());
        return a[a.size()-1];

    }
};
