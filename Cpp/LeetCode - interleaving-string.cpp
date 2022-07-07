class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        string s4=s1+s2;
        if(s4==s3) return true;
        if(s1==s2&&s2==s3) return true;
        int s1i=0;
        int s2i=0;
        for(int i=0;i<s3.size()-1;i++){
            if(s3[i]==s1[s1i]){
                while(true){
                    if(s3[i+1]==s1[s1i+1]){
                        i=i+1;
                        s1i=s1i+1;
                    }else{
                        s1i=s1i+1;
                        break;
                    }
                }
            }else if (s3[i]==s2[s2i]){
                while(true){
                    if(s3[i+1]==s2[s2i+1]){
                        i=i+1;
                        s2i=s2i+1;
                    }else{
                        s2i=s2i+1;
                        break;
                    }
                }
        }else {
                return false;
            }
    }
        return true;
}
};
