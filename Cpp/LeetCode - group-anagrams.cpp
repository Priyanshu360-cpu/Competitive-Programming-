class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<string,vector<string>> a;
        for(int i=0;i<strs.size();i++){
            string gh=strs[i];
            int p=0;
            while(next_permutation(strs[i].begin(),strs[i].end())){
                if(a.find(strs[i])!=a.end()){
                    a[strs[i]].push_back(gh);
                    p=1;
                    break;
                }
            }
            if(p==0){
                vector<string> b;
                cout<<gh;
                b.push_back(gh);
                a.insert(pair<string,vector<string>>(gh,b));
            }
        }
        vector<vector<string>> c;
        for (auto i : a){
            c.push_back(i.second);
        }
        return c;
    }
};
