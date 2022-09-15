class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        map<int,int> a;
        for(auto x:changed){
            a[x]+=1;
        }
        vector<int> c;
        for(auto x:a){
            if(!x.first){
                if(a[x.first]%2==0){
                    for(int i=0;i<a[x.first]/2;i++)c.push_back(0);
                    continue;
                }else return {};
            };
            if(a[x.first]){
                if(a[2*x.first]>=a[x.first]){
                for(int i=0;i<a[x.first];i++)c.push_back(x.first);
                a[2*x.first]-=a[x.first];
                a[x.first]=0;
                }else return {};
            }
        }
        return c;
    }
};
