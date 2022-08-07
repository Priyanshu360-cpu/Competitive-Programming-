\\ BRUTE FORCE METHOD

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

\\ TREE METHOD

class Solution {
public:
    int countVowelPermutation(int n) {
       long long int a=1,e=1,i=1,o=1,u=1;
        for(int r=1;r<n;r++){
            long long int  b,c,d,f,g;
            b = (e+i+u) % 1000000007;
            c = (a+i) % 1000000007;
            d = (e+o) % 1000000007;
            f = i % 1000000007;
            g = (o+i) % 1000000007;
            a=b;
            e=c;
            i=d;
            o=f;
            u=g;
        }
        return (a+e+i+o+u) % 1000000007;
    }
};
