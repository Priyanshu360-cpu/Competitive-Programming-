class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
       vector<string> a;
       for(int i=0;i<words1.size();i++){
                  map<char,int> b;
           for(int j=0;j<words1[i].size();j++)b[words1[i][j]]+=1;
           int g=0;
           for(int j=0;j<words2.size();j++){
               map<char,int> c=b;
               for(auto y:words2[j]){
                if(c.find(y)==c.end()){
                    g=1;
                    break;
                }else{
                    if(c[y]<=0){
                        g=1;
                        break;
                    }else{
                        c[y]=c[y]-1;
                    }
                }
       }
               if(g==1)break;
           }
               if(g==0)a.push_back(words1[i]);
           
           }
        return a;
    }
};
