class Solution {
public:
    string longestPalindrome(string s) {
vector<vector<string>> a;
        for(int i=0;i<s.size();i++){
            vector<string>b;
            string str;
            str=str+s[i];
            b.push_back(str);
            string st="";
            for(int j=i+1;j<s.size();j++){ 
                st=st+s[j];
                b.push_back(st);
                a.push_back(b);
            }
        }
        vector<vector<string>> tester;
        for(int i=0;i<a.size();i++) tester[i].push_back(a[i][a[i].size()-1]);
        
        
        vector<vector<string>> re;
        for (int i=0;i<tester.size();i++){
             vector<string>c;
            for(int j=tester[i].size()-1;j>=0;j--){
                 c.push_back(tester[i][j]);
            }
            re.push_back(c);
        }
        cout<<a[0][1];
        vector<string> max;
         for (int i=0;i<a.size();i++){
           for(int j=0;j<a[i].size();j++){
                 cout<<re[i][j]<<" "<<a[i][j]<<"\n";
               
            }
        }
      
       ;
        return a[3][3];
        }
        }
