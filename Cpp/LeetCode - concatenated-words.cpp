class Solution {
public:
    struct node{
        struct node* alph[26];
    };
    struct node* c;
    void insert(string b,struct node* a,int j){
        for(int i=j;i<b.size();i++){
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
