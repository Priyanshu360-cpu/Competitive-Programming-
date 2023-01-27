//# Intuition
//what could be a good data structure to store records of overlapping words? Trie

//# Approach
//first store the words in trie and then search for overlappings using dfs. it will always display 1 result(coz the string we inserted in beginning) which we ignore and search for other results 

//# Code -1 accepted

class Solution {
public:
    struct node{
        struct node* alph[26];
        bool end;
    };//defining trie
    void insert(string b,struct node* a){
        for(int i=0;i<b.size();i++){
            if(a->alph[b[i]-'a']==NULL)a->alph[b[i]-'a']=new node();
            a=a->alph[b[i]-'a'];//moving pointer
        }
        a->end=true;
    }
    bool check(string b,struct node* a,int j,int c){
        if(j==b.size()) return c!=1;
        struct node* flag=a;
        for(int i=j;i<b.size();i++){
            if(flag->alph[b[i]-'a']==NULL)return false;
                flag=flag->alph[b[i]-'a'];
                if(flag->end){//checking if termination is reached
                    if(check(b,a,i+1,c+1))return true;//looking for next part of the string
                }
        }
        return false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
       struct node* a=new node();
       vector<string> d;
       for(auto x:words)insert(x,a);
       for(auto x:words)if(check(x,a,0,0))d.push_back(x);
        return d;
    }
};

// code-2 the rough code

class Solution {
public:
    struct node{
        struct node* alph[26];
    };
    struct node* c;
    void insert(string b,struct node* a,int j){
        for(int i=j;i<b.size();i++){
            if(a->alph[b[i]-'a']==NULL)
            a->alph[b[i]-'a']=new node();
            a=a->alph[b[i]-'a'];
        }
    }
    bool check(string b,struct node* a,struct node* g){
        int d=0;
        for(int i=0;i<b.size();i++){
            if(a->alph[b[i]-'a']==NULL){
                d=1;
                if(strictcheck(b.substr(i),g,g)==true)return true;
                insert(b,a,i);
                break;
            }
            else{
                a=a->alph[b[i]-'a'];
            }
        }
        return d==0;
    }
    bool strictcheck(string b,struct node* a,struct node* g){
        int e=0;
        for(int i=0;i<b.size();i++){
            if(a&&a->alph[b[i]-'a']==NULL){
                if(i==0)return false;
                e=1;
                a=g;
                return strictcheck(b.substr(i),a,g);
            }else{
                a=a->alph[b[i]-'a'];
            }
        }
        return e==0;
    }
struct compare {
    inline bool operator()(const std::string& first,
            const std::string& second) const
    {
        return first.size() < second.size();
    }
};
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        compare z;
        sort(words.begin(),words.end(),z);
        struct node* a=new node();
        vector<string> d;
       for(auto x:words){
           if(check(x,a,a))d.push_back(x);
       }
        return d;
    }
};
