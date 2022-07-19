class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<string,vector<string>> a;
        for(int i=0;i<strs.size();i++){
            string gh=strs[i];
            sort(strs[i].begin(),strs[i].end());
          if(a.find(strs[i])!=a.end()){
              a[strs[i]].push_back(gh);
          }else{   
                vector<string> b;
                b.push_back(gh);
                a.insert(pair<string,vector<string>>(strs[i],b));
            }
        }
        vector<vector<string>> c;
        for (auto i : a){
            c.push_back(i.second);
        }
        return c;
    }
};
