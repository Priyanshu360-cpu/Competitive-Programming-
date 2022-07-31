class NumArray {
    public:
    vector<int> a;
public:
    NumArray(vector<int>& nums) {
         a=nums;
    }
    void update(int index, int val) {
       a[index]=val;
    }
    int sumRange(int left, int right) {
        return accumulate(a.begin()+left,a.begin()+right+1, 0);;
    }
};
