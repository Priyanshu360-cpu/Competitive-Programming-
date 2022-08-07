class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        vector<string> a;
        queue<string> c;
        map<string,bool> b;
        map<string,vector<string>> d;
        for(auto x:tickets){
            b[x[0]]=false;
            b[x[1]]=false;
            d[x[0]].push_back(x[1]);
            sort(d[x[0]].begin(),d[x[0]].end());
        }
        c.push("JFK");
        while(!c.empty()){
            if(d.find(c.front())!=d.end() && b[c.front()]!=true){
            for(auto y:d[c.front()]){
                if(d.size()>1){
                if(b[y]==false){
                a.push_back(c.front());
                c.push(y);
                a.push_back(y);
                }
                    }else{
                if(a.size()==0)a.push_back("JFK");
                c.push(y);
                a.push_back(y);
                }
            }
        }
             b[c.front()]=true;
                c.pop();
        }
        return a;
    }
}; 
