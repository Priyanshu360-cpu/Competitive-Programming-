class Solution {
public:
    int compress(vector<char>& chars) {
        char a=' ';
        int count=1;
        vector<char> d;
        for(int i=0;i<chars.size();i++){
            if(chars[i]!=a){
                if(a!=' ')
                    d.push_back(a);
                if(count!=1){
                    for(auto x:to_string(count))d.push_back(x);
                }
                count=1;
                a=chars[i];
            }else count++;
        }
         if(a!=' ')
        d.push_back(a);
        if(count!=1){
            for(auto x:to_string(count))d.push_back(x);
        }
        chars=d;
        return d.size();
    }
};
