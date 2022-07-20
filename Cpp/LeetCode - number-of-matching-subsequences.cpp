class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        string::iterator it;
        int p=0;
        for(auto x:words){
            vector<int> z;
            if(x.size()==1){
                it=find(s.begin(),s.end(),x[0]);
                if(it!=s.end()){
                    p=p+1;
                    continue;
                }
            }
            for(int i=0;i<s.size();i++){
                if(x[0]==s[i])z.push_back(i);
            }
            for(auto y:z){
                int q=0;
                vector<int> h;
                for(auto o:x){
                    it=find(s.begin()+y,s.end(),o);
                    if(it!=s.end()){
                        h.push_back(it-s.begin());
                        y=(it-s.begin())>0?it-s.begin()-1:it-s.begin();
                    }else{
                        q=1;
                        break;
                    }
                }
                if(q==0){
                    int g=0;
                     for(int i=0;i<h.size()-1;i++){
                if(h[i]>=h[i+1]){
                    g=1;
                    break;
                }
            }
            if(g==0) p=p+1;
                }
            }
        }
        return p;
    }
};
