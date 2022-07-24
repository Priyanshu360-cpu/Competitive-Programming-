class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int s=0;
        vector<int> bits(flips.size(),0);
        int l=0;
        for(auto x:flips){
            l=l+1;
            int j=0;
            bits[x-1]=1;
            for(int i=0;i<l;i++){
                if(bits[i]!=1){
                    j=1;
                    break;
                }
            }
            if(j==0)s=s+1;
        }
        return s;
    }
};
