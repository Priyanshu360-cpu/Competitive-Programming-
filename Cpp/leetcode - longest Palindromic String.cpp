class Solution {
public:
    string longestPalindrome(string s) {
        vector<string>a;
         vector<string>b;
        for(int i=0;i<s.size();i++){
            string str;
            str=str+s[i];
            a.push_back(str);
            for(int j=i+1;j<s.size();j++){
                str=str+s[j];
                a.push_back(str);
            }
        }
        for(int i=0;i<a.size();i++){
            string str;
            
            for(int j=a[i].size()-1;j>=0;j--){
                str=str+a[i][j];
            }
             b.push_back(str);
        } 
        vector<string> c;
         for(int i=0;i<a.size();i++){if(a[i]==b[i])c.push_back(a[i]);}
        int max=0;
        int in=0;
        for(int i=0;i<c.size();i++){
            if(c[i].size()>max){
                max=c[i].size();
                in=i;
            }
        }
        return c[in];
    }
};
