
class Solution {
public:
map<char,vector<int>> count;
    int numMatchingSubseq(string s, vector<string>& words) {
        for(int i=0;i<s.size();i++){
            count[s[i]].push_back(i);//add each position of each char
        }
        int z=0;
        for(auto& x:words){
            int p=-1;//find element greater thn this index
            int r=0;//flag bit
            for(int j=0;j<x.size();j++){
                if(count.find(x[j])==count.end()){r=1;break;}
                if(upper_bound(count[x[j]].begin(),count[x[j]].end(),p)==count[x[j]].end()){r=1;break;}//if grtr position not found
                p=count[x[j]][upper_bound(count[x[j]].begin(),count[x[j]].end(),p)-count[x[j]].begin()];//updating search index
                }
            if(r==0)z+=1;
        }
        return z;
    }
};
