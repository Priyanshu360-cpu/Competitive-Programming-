class Solution {
public:
bool ispossible(string &s1, string s2){
         vector<int> a(26,0),b(26,0);
         for(auto x:s1)a[x-'a']+=1;
         for(auto x:s2)b[x-'a']+=1;
         for(auto x:s1)
             if(a[x-'a']!=b[x-'a'])return false;
        return true;
}
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        for(int i=0;i<s2.size()-s1.size()+1;i+=1){
            if(ispossible(s1,s2.substr(i,s1.size())))return true;
        }
        return false;
    }
};
