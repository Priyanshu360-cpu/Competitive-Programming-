class Solution {
public:
    int j=INT_MAX;
    int solution(string s,int k,vector<vector<int>>& z){
        if(k==0){
        int i=1;
        char a=s[0];
        string p="";
            for(int j=1;j<s.size();j++){
            if(s[j]=='_')continue;
            if(s[j]==a)i+=1;
            else{
                p+=a;
                if(i>1)p+=to_string(i);
                a=s[j];
                i=1;
            }
        }
        if(a!='_')
        p+=a;
        if(i>1)p+=to_string(i);
            cout<<p<<endl;
            return p.size();
        }
     else{
         for(int i=0;i<s.size();i++){
             if(s[i]=='_')continue;
             else{
                 char r=s[i];
                 s[i]='_';
                 j=min(j,solution(s,k-1,z));
                 s[i]=r;
             }
         }
     }
        return j;
    }
    int getLengthOfOptimalCompression(string s, int k) {
        vector<vector<int>> z(s.size()+1,vector<int>(k+1,INT_MAX));
        return solution(s,k,z);
    }
};
