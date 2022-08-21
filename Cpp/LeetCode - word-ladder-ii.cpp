class Solution {
public:
    void doit(map<string,bool> e,vector<string> wordsList,string a,string endo,int* c,vector<string> q, vector<vector<string>>& f){
        
        q.push_back(a);
        if(a==endo){
            *c=*c+1;
            f.push_back(q);
            return;}
        else{
        map<char,vector<int>> b;
            for(int i=0;i<a.size();i++){
                b[a[i]].push_back(i);
            }
            for(auto x:wordsList){
                if(e[x]==true){
                    map<char,vector<int>> w;
                    for(int i=0;i<x.size();i++)w[x[i]].push_back(i);
                    int d=0;
                    vector<int> s;
                    vector<int>::iterator r;
                  for(auto x:b){
                      if(b[x.first]!=w[x.first]){
                        if(w[x.first].size()==0){
                         if(b[x.first].size()==1){
                             cout<<b[x.first][0];
                             r=find(s.begin(),s.end(),b[x.first][0]);
                             if(r==s.end()){
                                 s.push_back(b[x.first][0]);
                                   d+=1;
                             }
                         }
                    }else{
                             vector<int>::iterator it;
                             for(auto y:w[x.first]){
                                 it=find(b[x.first].begin(),b[x.first].end(),y);
                                 
                                 if(it==b[x.first].end()){
                             r=find(s.begin(),s.end(),y);
                             if(r==s.end()){
                                 s.push_back(y);
                                   d+=1;
                             }
                                         cout<<y<<endl;
                                     
                                 }
                             }
                         }   
                      }
                  }
                    cout<<a<<" "<<x<<d<<endl;
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
            map<char,vector<int>> a;
            for(int i=0;i<beginWord.size();i++){
                a[beginWord[i]].push_back(i);
            }
            for(int i=0;i<wordList.size();i++){
                map<char,vector<int>> b;
                int d=0;
                for(int j=0;j<wordList[i].size();j++){
                    b[wordList[i][j]].push_back(j);
                }
                for(auto x:b){
                    if(a[x.first]!=b[x.first]){
                         if(a[x.first].size()==0){
                         if(b[x.first].size()==1)d++;
                    }else{
                             vector<int>::iterator it;
                             for(auto y:a[x.first]){
                                 it=find(b[x.first].begin(),b[x.first].end(),y);
                                 if(it==b[x.first].end())d++;
                             }
                         }
                }
                }
                if(d==1){
                    e[beginWord]=false;
                    e[wordList[i]]=false;
                    vector<string> q;
                    q.push_back(beginWord);
                    
                    doit(e,wordList,wordList[i],endWord,&c,q,f);
                }
            }
       
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
