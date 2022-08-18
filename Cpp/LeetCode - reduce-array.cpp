class Solution {
public:
    void setter(vector<int> arr,unordered_map<int,int> a,int b,int c,int* max){
     int s=0;
        for(auto x:a)
            s=s+x.second;
        if(s-a[b]==arr.size()/2)
            if(c+1<*max){
                *max=c+1;
            }
        else 
            return;
        else if(s-a[b]>arr.size()/2&&a[b]!=0){
            c++;
            a[b]=0;
            for(auto y:a)
                setter(arr,a,y.first,c,max);
        }
        else if(s-a[b]<arr.size())
            return;
    }
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> a;
        for(auto x:arr){
            a[x]+=1;
        }
        int max=INT_MAX;
        for(auto x:a){
        setter(arr,a,x.first,0,&max);
        }
        return max==INT_MAX?1:max;
    }
};
