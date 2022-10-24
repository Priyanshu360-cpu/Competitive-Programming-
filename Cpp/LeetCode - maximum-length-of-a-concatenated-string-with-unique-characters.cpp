class Solution {
public:
    int mine=INT_MIN;
    int t;
    string d="";
    int solution(vector<string>&arr,int i,string z){
        for(int j=i;j<arr.size();j++){
            d="";
            d=d+z;
            d=d+arr[j];
        mine=max(mine,solution(arr,j+1,d));    
        }
        map<char,int> a;
        for(auto x:z){
            a[x]=a[x]+1;
            if(a[x]>1)return 0;
        }
        return a.size();
    }
    int maxLength(vector<string>& arr) {
        arr.push_back("");
        solution(arr,0,"");
        return mine;
    }
};
