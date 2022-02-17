class Solution {
public:
    string longestPalindrome(string s) {
        vector<string>a;
        for(int i=0;i<s.size();i++){
            string b;
            b=b+s[i];
            a.push_back(b);
            for(int j=i+1;j<s.size();j++){
                b=b+s[j];
                a.push_back(b);
            }
        }
        vector<string>c;
        for(int i=0;i<a.size();i++){
            string l;
            for(int j=a[i].size()-1;j>=0;j--){
                l=l+a[i][j];
            }
            c.push_back(l);
        }
        vector<string> d;
        for(int i=0;i<a.size();i++){
            if(a[i]==c[i]) d.push_back(a[i]);
        }
        int max=0;
        int min=0;
        for(int i=0;i<d.size();i++){
            if(d[i].size()>max){max=d[i].size();min=i;}
        }
       
        return d[min];
    }
};
