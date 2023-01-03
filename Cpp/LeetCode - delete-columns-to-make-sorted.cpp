class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<string> strr(strs[0].size(),"");
        int b=0;
        while(b!=strs[0].size()){
        for(int i=0;i<strs.size();i++){
            strr[b]=strr[b]+strs[i][b];
        }
        b+=1;
        }
        b=0;
        for(auto x:strr){
            if(x=="")continue;
            strs[0]=x;
            sort(x.begin(),x.end());
            if(strs[0]!=x)b+=1;
        }
        return b;
    }
};
