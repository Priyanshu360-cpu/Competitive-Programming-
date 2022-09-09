class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int d=0;
        for(int i=1;i<properties.size();i++){
            auto key=properties[i];
            int j=i-1;
            while(j>=0&&properties[j][0]>key[0]){
                properties[j+1]=properties[j];
                j-=1;
            }
            properties[j+1]=key;
        }
        map<int,vector<int>> a;
        for(auto x:properties){
            a[x[0]].push_back(x[1]);
            sort(a[x[0]].begin(),a[x[0]].end());
        }
        vector<int> z;
        for(auto x:a){
            z.push_back(x.first);}
        for(int i=0;i<z.size();i++){
                int h=0;
            for(int j=a[z[i]].size()-1;j>=0;j--){
                if(h==1)break;
                for(int k=i+1;k<z.size();k++){
                    if(a[z[k]][a[z[k]].size()-1]>a[z[i]][j]){
                        d+=j+1;
                        h=1;
                        break;
                    }
                }
              }
            }
        return d;
    }
};
