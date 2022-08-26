class Solution {
public:
    void doit(string& s,int n,int k){
        if(n>=k) return;
        s=s+"1"+changer(s);
        cout<<s<<endl;
        doit(s,n+1,k);
    }
    string changer(string s){
        string z="";
        for(auto x:s){
            if(x=='0')z=z+"1";
            else z=z+"0";
        }
        reverse(z.begin(),z.end());
        return z;
    }
    char findKthBit(int n, int k) {
        string s="0";
        doit(s,1,n);
            return s[k-1];
    }
};
