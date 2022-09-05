//Less Time Complexity

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> a;
        for(auto x:arr){
            a[x]+=1;
        }
        map<int,vector<int>> b;
        for(auto x:a)b[x.second].push_back(x.first);
        for(int i=0;i<k;i++){
            for(auto x:b){
                if(x.second.size()){
                    int d=x.second[x.second.size()-1];
                    x.second.pop_back();
                    b[x.first]=x.second;
                    if(x.first>1){
                        b[x.first-1].push_back(d);
                    }
                    break;
                }
            }
        }
        int s=0;
       for(auto x:b)s+=x.second.size();
        return s;
    }
};

//Less Memory

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> a;
        for(auto x:arr){
            a[x]+=1;
        }
        for(int i=0;i<k;i++){
            int min=INT_MAX;
            int l=1;
            for(auto x:a){
                if(x.second<min&&x.second!=0){
                    min=x.second;
                    l=x.first;
                }
            }
            if(a[l])
            a[l]-=1;
        }
        int s=0;
        for(auto x:a){
if(x.second)s+=1;}
        return s;
    }
};
