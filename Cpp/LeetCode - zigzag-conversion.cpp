class Solution {
public:
map<int,vector<char>> a; 
void traverse(string& s,int &n,int i,int p){
    if(p==s.size())return;
    if(i==n){
        zag(s,n,i-2,p);
        return;}
    a[i].push_back(s[p]);
    traverse(s,n,i+1,p+1);
}
void zag(string& s,int &n,int i,int p){
    if(i==0){
        traverse(s,n,i,p);
        return;}
    if(p==s.size())return;
    a[i].push_back(s[p]);
    zag(s,n,i-1,p+1);
}
    string convert(string s, int numRows){
        if(numRows==1)return s;
        traverse(s,numRows,0,0);
        string r="";
        for(auto x:a){
            for(auto y:x.second)r=r+y;
        }
        return r;
    }
};
