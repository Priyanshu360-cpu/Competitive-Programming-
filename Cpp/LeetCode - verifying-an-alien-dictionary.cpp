class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> a(26,-1);
        for(int i=0;i<order.size();i++)
        a[order[i]-'a']=i;
        for(int i=0;i<words.size();i++){
            int r=words[i].size();
            for(int j=i+1;j<words.size();j++){
            int s=words[j].size();
            int op=0;
            if(max(r,s)==s){
                for(int k=0;k<r;k++){
                    if(a[words[i][k]-'a']>a[words[j][k]-'a'])return false;
                    else if(a[words[i][k]-'a']<a[words[j][k]-'a']){
                        op+=1;
                        break;
                    }
                }
                if(op==0)
                if(words[j].size()<words[i].size())return false;
            }else{
                for(int k=0;k<s;k++){
                    if(a[words[j][k]-'a']<a[words[i][k]-'a'])return false;
                    else if(a[words[j][k]-'a']>a[words[i][k]-'a']){
                        op+=1;
                        
                        break;
                    }
                }
                if(op==0)
                if(words[j].size()<words[i].size()) return false;
            }
            }
        }
        return true;
    }
};
