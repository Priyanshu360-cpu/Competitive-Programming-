class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> a;
        k=k-1;
        for(int i=1;i<=n;i++) a.push_back(i);
       while(k--){
           next_permutation(a.begin(),a.end());
       }
        string s="";
        for(int i=0;i<a.size();i++){
                ostringstream str1;
            str1 <<a[i];
            string geek = str1.str();
         s=s+geek;}
        return s;
    }
};
