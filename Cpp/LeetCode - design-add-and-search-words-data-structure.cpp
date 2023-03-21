class WordDictionary {
public:
struct node{
    struct node* a[26];
    bool isend;
};
struct node* Tree;
    WordDictionary() {
        Tree=new node();
    }
    
    void addWord(string word){
        struct node* apple=Tree;
        for(int i=0;i<word.size();i++){
     if(apple->a[word[i]-'a']==NULL)apple->a[word[i]-'a']=new node();
     apple=apple->a[word[i]-'a'];
        }
        apple->isend=true;
    }
    bool searchr(node* Tree1,string word,int i){
        bool ans=false;
        if(i==word.size()){
            return Tree1->isend;
            }
        if(word[i]=='.'){
            for(int j=0;j<26;j++){
                if(Tree1->a[j]!=NULL&&searchr(Tree1->a[j],word,i+1)){
                    return true;
                }
            }
            return false;
        }else{
            if(Tree1->a[word[i]-'a']==NULL)return false;
            return searchr(Tree1->a[word[i]-'a'],word,i+1);
        }
    }
    bool search(string word) {
        return searchr(Tree,word,0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
