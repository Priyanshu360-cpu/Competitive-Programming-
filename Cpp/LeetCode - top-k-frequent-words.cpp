class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> a;
        map<int,vector<string>> b;
        vector<string> d;
        for(auto x:words){
            a[x]+=1;
        }
        for(auto x:a)b[x.second].push_back(x.first);
         for (auto it = b.rbegin(); it != b.rend(); ++it){
             if (k==0) return d;
             else{
                 sort(it->second.begin(),it->second.end());
                 for(auto x:it->second){
                     if(k==0) return d;
                     d.push_back(x);
                     k-=1;
                 }
             }
         }
        return d;
    }
};
