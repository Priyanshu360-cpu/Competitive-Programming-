
class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        map<int,vector<int>> a;
        for(int i=0;i<values.size();i++)a[values[i]].push_back(labels[i]);
        sort(values.begin(),values.end(),greater <>());
        map<int,int> c;
        int s=0;
        int t=0;
        for(int i=0;i<values.size();i++){
            for(int j=0;j<a[values[i]].size();j++){
                if(c[a[values[i]][j]]<useLimit){
                t+=values[i];    
                c[a[values[i]][j]]++;
                s+=1;       
                a[values[i]].erase(a[values[i]].begin() + j);
                if(s==numWanted)break;
                 }
            }
               if(s>=numWanted)break;
        }
        return t;
    }
};
