class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> a=target;
        if(a==arr)return true;
        next_permutation(a.begin(), a.end());
        while(a!=target){
            if(a==arr)return true;
            next_permutation(a.begin(), a.end());
        }
        return false;
    }
};
