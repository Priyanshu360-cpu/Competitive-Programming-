class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string t="";
        for(int i=0;i<str1.size()&&i<str2.size();i++){
            if(str1[i]!=str2[i]) return "";
            t=t+str1[i];
        }
        string b="";
            for(int i=0;i<t.size();i++){
             b=b+t[i];
             string s=t.substr(i+1);
             size_t found = s.find(b);
             if (found != string::npos && found==0){
                 s=s.substr(b.size());
                 if(s=="")break;
                 found = s.find(b);
                 if (found != string::npos && found==0)break;
             }
        }
int f=0,se=0;
        while(str1.size()){
            size_t found = str1.find(b);
            f+=1;
            if(found != string::npos && found==0)str1=str1.substr(b.size());
            else return "";
        }
        while(str2.size()){
            size_t found = str2.find(b);
            se+=1;
            if(found != string::npos && found==0)str2=str2.substr(b.size());
            else return "";   
        }
        string r=b;
        int z=gcd(f,se);
        while(z!=1){
            z-=1;
            b=b+r;
        }
        return b;
    }
};
