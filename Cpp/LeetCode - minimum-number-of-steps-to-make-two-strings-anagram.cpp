class Solution {
public:
map<int,int> a;
map<int,int> b;
    int minSteps(string s, string t) {
        for(auto x:s){
            a[x]+=1;
        }
        for(auto x:t){
            b[x]+=1;
        }
        int p=0,l=0;
        for(auto x:b){
            if(b[x.first]>a[x.first])p+=b[x.first]-a[x.first];
            if(b[x.first]<a[x.first])l+=a[x.first]-b[x.first];
        }
        if(p>l){
            return p;
        }else return l;
    }
};
