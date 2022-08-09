class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        vector<int> b;
        vector<int> c(puzzles.size(),0);
        vector<map<char,int>> e;
        vector<map<char,int>> d;
        for(auto x: puzzles){
            map<char,int> a;
            for(auto y:x)a[y]+=1;
            e.push_back(a);
        }
        for(auto x:words){
             map<char,int> a;
            for(auto y:x)a[y]+=1;
            d.push_back(a);
        }
        for(int i=0;i<puzzles.size();i++){
            for(int j=0;j<words.size();j++){
                if(d[j][puzzles[i][0]]==0)continue;
                else{
                    int p=0;
                    for(auto x:d[j]){
                        if(e[i][x.first]==0){
                            p=1;
                            break;}
                    }
                    if(p==0)c[i]+=1;
                }
            }
        }
        return c;
    }
};
