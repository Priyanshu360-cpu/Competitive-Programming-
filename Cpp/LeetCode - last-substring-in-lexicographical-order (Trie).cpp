
class Solution {
public:
    struct trie{
        int pos=0;
        struct trie* children[26];
    };
    string lastSubstring(string s) {
        struct trie* finder=new trie();
        struct trie* holder=finder;
       for(auto x:s){
           finder->children[x-'a']=new trie();
           finder->pos=x-'a';
           finder=finder->children[x-'a'];
       }
        string b="";
        int a=97;
        while(holder->children[holder->pos]){
            if(holder->pos+97>a){
                a=holder->pos+97;
                b="";
                b+=(char)a;
            }else{
                char q=(holder->pos+97);
                b=b+q;
            }
            holder=holder->children[holder->pos];
        }
        return b;
    }
};
