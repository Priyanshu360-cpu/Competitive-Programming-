class Solution {
public:
    int countVowelPermutation(int n) {
        vector<char> a;
        a.push_back('a');
        a.push_back('e');
        a.push_back('i');
        a.push_back('o');
        a.push_back('u');
        int c=1;
        while(c!=n){
            c++;
            int b=a.size();
            for(int i=0;i<b;i++){
                if(a[i]=='a'){
                    a[i]='e';
                }else if(a[i]=='e'){
                    a[i]='a';
                    a.push_back('i');
                }else if(a[i]=='i'){
                    a[i]='a';
        a.push_back('e');
        a.push_back('o');
        a.push_back('u');
                }else if(a[i]=='o'){
                    a[i]='i';
                    a.push_back('u');
                }else{
                    a[i]='a';
                }
            }
        }
        return a.size()%1000000007;
    }
};
