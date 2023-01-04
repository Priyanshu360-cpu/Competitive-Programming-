# Solution 1 - Accepted Direct Approach

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        vector<int> avail(skill.size(),1);
        long long ans=skill[0]*skill[skill.size()-1];
        int holder=skill[0]+skill[skill.size()-1];
        avail[0]=0;
        avail[skill.size()-1]=0;
        int p=2;
        for(int i=1;i<skill.size()-1;i++){
            if(avail[i]==0)continue;
            avail[i]=0;
            int j=skill.size()-p;
            while(j){
                if(skill[i]+skill[j]==holder&&avail[j]==1){
                    avail[j]=0;
                    break;
                }
                j-=1;
            }
            p+=1;
            if(j==0)return -1;
            ans+=(skill[i]*skill[j]);
        }
        return ans;
    }
};

# Solution 2 - Accepted Logical Approach

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long ans=skill[0]*skill[skill.size()-1];
        int holder=skill[0]+skill[skill.size()-1];
        int p=2;
        for(int i=1;i<skill.size()-p;i++){
            int j=skill.size()-p;
            if(skill[i]+skill[j]!=holder) return -1;
            ans+=(skill[i]*skill[j]);
            p+=1;
        }
        return ans;
    }
};
