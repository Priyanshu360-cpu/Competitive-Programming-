class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> h;
        if(num%3!=0) return h;
        else{
              h.push_back((num/3)-1);
              h.push_back(num/3);
             h.push_back((num/3)+1);
            return h;
        }
    }
};
