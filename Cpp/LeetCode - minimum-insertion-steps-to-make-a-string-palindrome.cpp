class Solution {
public:
int solute(string s,int i,int j,int c,int l){
    if(i>=j)return c;
    if(s.size()>l)return INT_MAX;
    int p=c;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            string t="";
            for(int k=0;k<i;k++){
                t=t+s[k];
            }
            t=t+s[j];
            for(int k=i;k<s.size();k++){
                t=t+s[k];
            }
            s=s+s[i];
            p=min(solute(t,0,t.size()-1,c+1,l),solute(s,0,s.size()-1,c+1,l));
            break;
        }
    }
    return p;
}
    int minInsertions(string s) {
        return solute(s,0,s.size()-1,0,2*s.size());
    }
};
