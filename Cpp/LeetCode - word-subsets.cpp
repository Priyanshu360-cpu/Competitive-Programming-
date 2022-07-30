class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
       vector<string> a;
       for(int i=0;i<words1.size();i++){
           string k=words1[i];
           int g=0;
      for(auto z:words2){
          words1[i]=k;
          for(auto x:z){
          size_t found = words1[i].find(x);
          if(found!= string::npos){
            words1[i][found]='%';
              }else{
              g=1;
              break;
          }
       }
          if(g==1)break;
      }
           if(g==0)a.push_back(k);
           }
        return a;
    }
};
