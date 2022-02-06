class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        for(int i=prices.size()-1;i>=0;i--){
            for(int j=0;j<i;j++){
                int b=prices[i]-prices[j];
                max=b>max?b:max;
            }
        }
        return max;
    }
};
