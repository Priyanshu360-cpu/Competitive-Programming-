class Solution {
public:

    bool reorderedPowerOf2(int n) {
        vector<int> a;
        int x=n;
        if(pow(2,floor(log(n)/log(2)))==n) return true;
        while(x){
            a.push_back(x%10);
            x/=10;};
        int o=0;
        if(a[0]!=0){
        for(auto x:a)o=o*10+x;
            if(pow(2,floor(log(o)/log(2)))==o) return true;
        }
        vector<int> b=a;
        next_permutation(a.begin(),a.end());
        while(a!=b){
            if(a[0]==0){
                next_permutation(a.begin(),a.end());
                continue;
            }
            o=0;
            for(auto x:a){
                o=o*10+x;
            }
            if(pow(2,floor(log(o)/log(2)))==o) return true;
            next_permutation(a.begin(),a.end());
        }
        return false;
    }
};
