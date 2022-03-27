class Solution {
public:
    void reverseString(vector<char>& s) {
        int b=s.size()-1;
        for(int i=0;i<(b+1)/2;i++){
            char k=s[i];
            s[i]=s[b];
            s[b]=k;
            b=b-1;
        }
    }
};
