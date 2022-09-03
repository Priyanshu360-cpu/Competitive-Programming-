class Solution {
public:
    void solution(vector<int>& answer,vector<int> finder,int j,int k){
        if(j==finder.size()){
            int s=0;
            for(auto x:finder)s=s*10+x;
            answer.push_back(s);
            return;
        }
        if(j==0){
            for(int i=1;i<=9;i++){
                finder[j]=i;
                 solution(answer,finder,j+1,k);
            }
        }
        else{
        for(int i=0;i<=9;i++){
            if(abs(i-finder[j-1])==k){
                finder[j]=i;
                solution(answer,finder,j+1,k);
            }
          }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> answer;
        vector<int> finder(n,0);
        solution(answer,finder,0,k);
        return answer;
    }
};
