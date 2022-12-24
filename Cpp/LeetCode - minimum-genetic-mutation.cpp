class Solution {
public:
    vector<string>::iterator it;
int mutate(string startGene, string endGene, vector<string>& bank,int p){
    if(startGene==endGene)return p;
    int s=INT_MAX;
        for(int i=0;i<startGene.size();i++){
             if(startGene[i]!=endGene[i]){
                 string r=startGene;
                 r[i]=endGene[i];
                 it=find(bank.begin(),bank.end(),r);
                 if(it!=bank.end()){
                     s=min(s,mutate(r,endGene,bank,p+1));
                 }
             }
        }
        return s;
}   
    int minMutation(string startGene, string endGene, vector<string>& bank){
        if(startGene.size()!=endGene.size())return -1;
        int s=mutate(startGene,endGene,bank,0);
        return s==INT_MAX?-1:s;
        }
};
