class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<string,int> a;
        string b[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<char,string> c;
        for(int i=97;i<=122;i++){
            c[char(i)]=b[i-97];
        }
        for(auto x:words){
            string d="";
            for(auto y:x){
                d=d+c[y];
            }
            a[d]+=1;
        }
        return a.size();
    }
};
