class Solution {
public:
    void doit(vector<int>& rolls,vector<int>& out,vector<int>& o,int mean,int n,int* g){
        if(*g==1)return;
        float f=accumulate(rolls.begin(),rolls.end(),0);
        float h=accumulate(o.begin(),o.end(),0);
        if((f+h)/(rolls.size()+o.size())>mean) return;
        if((f+h)/n==mean){
            for(auto x:o)out.push_back(x);
            *g=1;
            return;
        }else{
             if(h==o.size()*6){
                 *g=1;
                 return;
             }
            for(int i=0;i<o.size();i++){
                if(o[i]==6)continue;
                o[i]+=1;
                doit(rolls,out,o,mean,n,g);
            }
        }
    }
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> out;
        int a=accumulate(rolls.begin(),rolls.end(),0);
          if((a+n)/(rolls.size()+n)>mean)return out;
          vector<int> o(n,1);
            int g=0;
          doit(rolls,out,o,mean,n+rolls.size(),&g);
        return out;
    }
};
