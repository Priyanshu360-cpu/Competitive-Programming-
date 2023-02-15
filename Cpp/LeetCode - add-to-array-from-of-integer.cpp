class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        reverse(num.begin(),num.end());
        vector<int> q;
        while(k){
            q.push_back(k%10);
            k=k/10;
        }
        if(num.size()>q.size()){
            while(num.size()!=q.size())q.push_back(0);
        }else{
            while(num.size()!=q.size())num.push_back(0);
        }
        reverse(num.begin(),num.end());
        reverse(q.begin(),q.end());
        vector<int> sol;
        int c=0;
        for(int i=num.size()-1;i>=0;i--){
            int t=c+(num[i]+q[i]);
            sol.push_back(t%10);
            c=t/10;
        }
        if(c!=0)sol.push_back(c);
        reverse(sol.begin(),sol.end());
        return sol;
    }
};
