class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        sort(matchsticks.begin(),matchsticks.end());
        if((accumulate(matchsticks.begin(),matchsticks.end(),0))%4!=0)return false;
        int a=accumulate(matchsticks.begin(),matchsticks.end(),0)/4;
        
        for(int i=0;i<matchsticks.size()-1;i++)
        {
            if(matchsticks[i]==0) continue;
            else{
                int k=0;
                for(int j=0;j<matchsticks.size();j++){
                    if(j==i)continue;
                    if(matchsticks[i]+matchsticks[j]==a){
                        matchsticks[i]=0;
                        matchsticks[j]=0;
                        k=1;
                        break;
                    }
                    int m=j;
                    int l;
                    if(matchsticks[i]+matchsticks[j]<a){
                        if(matchsticks[i]==matchsticks[j]){
                            l=0;
                        } else
                         l=matchsticks[j];
                        matchsticks[i]=matchsticks[i]+l;
                        if(l==0)l=matchsticks[i];
                      
                        while(j<matchsticks.size()&&matchsticks[i]<a&&matchsticks[i]!=a){
                            if(matchsticks[j]!=l)
                            {matchsticks[i]=matchsticks[i]+matchsticks[j];
                             l=matchsticks[j];
                             matchsticks[j]=0;
                             cout<<j;
                            }
                            j=j+1;
                        }
                        
                        if(matchsticks[i]!=a){ cout<<matchsticks[i];return false;}
                        else {
                            j=0;
                            cout<<"j"<<j<<endl;
                            matchsticks[i]=0;
                        }
                    }
                }
                if(k==0) { return false;}
            }
        }
    return true;}
};
