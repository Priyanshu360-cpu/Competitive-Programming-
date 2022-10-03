class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int j=0;
        for(int i=0;i<colors.size()-1;i++){
            if(colors[i]==colors[i+1]&&colors[i]!='-'){
                int k=min(neededTime[i],neededTime[i+1]);
                j+=k;
                if(k==neededTime[i]){
                     colors.erase(i, 1);
                     neededTime.erase(neededTime.begin()+i);
                }else {
                colors.erase(i+1, 1);
                neededTime.erase(neededTime.begin()+i+1);
                }
                i-=1;
            }
        }
        return j;
    }
};
