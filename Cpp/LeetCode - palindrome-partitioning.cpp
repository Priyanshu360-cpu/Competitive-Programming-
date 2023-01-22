class Solution {
public:
bool ispalindrome(string r){
    string t=r;
    reverse(t.begin(),t.end());
    return t==r;
}
vector<vector<string>> c;
map<vector<string>,bool> e;
void solution(vector<string> a){
    if(e.find(a)==e.end())
{
    int q=1;
    for(int i=0;i<a.size();i++)if(ispalindrome(a[i])==false)q=0;
    if(q==1)
    c.push_back(a);e[a]=true;}
else return;
    for(int i=0;i<a.size()-1;i++){
                vector<string> d=a;
                d[i]=d[i]+d[i+1];
                d.erase(d.begin()+i+1);
                solution(d);
        }
}
    vector<vector<string>> partition(string s) {
        vector<string> a(s.size(),"");
        for(int i=0;i<s.size();i++)a[i]=a[i]+s[i];
        solution(a);
        a.clear();
        a.push_back(s);
        if(e.find(a)==e.end())if(ispalindrome(s))c.push_back(a);
        return c;
    }
};
