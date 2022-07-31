class NumArray {
    public:
    vector<int> a;
    int s=0;
public:
    NumArray(vector<int>& nums) {
        a=nums;
        s=accumulate(a.begin(),a.end(),0);
    }
    
    void update(int index, int val) {
        s-=a[index];
       a[index]=val;
        s+=a[index];
    }
    
    int sumRange(int left, int right) {
        int v=s;
        for(int i=0;i<left;i++)v-=a[i];
        for(int i=right+1;i<a.size();i++)v-=a[i];
        return v;
    }
};
