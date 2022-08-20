class Solution {
public:
    void doit(map<string,bool> e,vector<string> wordsList,string a,string endo,int* c,vector<string> q, vector<vector<string>>& f){
        cout<<a;
        q.push_back(a);
        if(a==endo){
            *c=*c+1;
            f.push_back(q);
            return;}
        else{
        map<char,int> b;
            for(auto x:a){
                b[x]+=1;
            }
            for(auto x:wordsList){
                if(e[x]==true){
                    map<char,int> w;
                    for(auto y:x)w[y]+=1;
                    int d=0;
                    for(auto y:x)if(b[y]==0)d++;
                    if(d==1){
                        e[x]=false;
                        doit(e,wordsList,x,endo,c,q,f);
                    }
                }
            }
        }
    }
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        vector<vector<string>> f;
        vector<string>::iterator it;
        it=find(wordList.begin(),wordList.end(),endWord);
        if(it==wordList.end())return f;
        else{
          int c=0;
            map<string,bool> e;
            for(auto x:wordList){
                e[x]=true;
            }
            map<char,int> a;
            for(auto x:beginWord){
                a[x]+=1;
            }
            for(int i=0;i<wordList.size();i++){
                map<char,int> b;
                int d=0;
                for(auto x:wordList[i]){
                    b[x]+=1;
                }
                for(auto x:wordList[i]){
                    if(b[x]!=a[x])d++;
                }
                if(d==1){
                    e[wordList[i]]=false;
                    vector<string> q;
                    q.push_back(beginWord);
                    
                    doit(e,wordList,wordList[i],endWord,&c,q,f);
                }
            }
            cout<<c;
            if(f.size()>0){
                int m=f[0].size();
                vector<vector<string>> k;
                for(auto x:f){
                    if(x.size()<m)m=x.size();
                }
                for(auto x:f){
                    if(x.size()==m)k.push_back(x);
                }
                return k;
            }
          return f;
        }
    }
};
