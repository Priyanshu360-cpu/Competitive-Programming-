// Union Find (TLE)
class Solution {
public:
void Union(vector<int>& a,int i,int p){
    int s=a[i];
    a[i]=p;
    if(s==-1)return;
    Union(a,s,p);
}
int finder(vector<int>& a,int i){
    if(a[i]==-1)return i;
    return finder(a,a[i]);
}

    string smallestEquivalentString(string s1, string s2, string baseStr) {
       vector<int> a(26,-1);
       for(int i=0;i<s1.size();i++){
           int k=((int)s1[i])-97;
           int p=((int)s2[i])-97;
           if(k<p){
                   if(a[p]==-1)a[p]=k;
                   else Union(a,p,k);
           }else if(p<k){
               if(a[k]==-1)a[k]=p;
               else Union(a,k,p);
           }
       }
       string r="";
       for(int i=0;i<baseStr.size();i++){
           int p=((int)baseStr[i]) -97;
           char s=a[p]==-1?p+97:finder(a,p)+97;
           r=r+s;
       }
       return r;
    }
};

// Trie Concept - Accepted

class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
       vector<int> a(26,0);
       for(int i=0;i<26;i++)a[i]=97+i;
       for(int i=0;i<s1.size();i++){
           int k=((int)s1[i])-97;
           int p=((int)s2[i])-97;
           int r=max(a[k],a[p]);
           int s=min(a[k],a[p]);
         for (int i=0; i<26; i++){
           if(a[i]==r)a[i]=s;
            }
       }
       string r="";
       for(int i=0;i<baseStr.size();i++){
           int p=((int)baseStr[i]) -97;
           char s=a[p];
           r=r+s;
       }
       return r;
    }
};
