vector<vector<int>> pairSum(vector<int> &arr, int s){
vector<vector<int>> r;
    for(int i=0;i<arr.size();i++){
         vector<int> a;
for(int j=i+1;j<arr.size();j++){
    if(arr[i]+arr[j]==s){
        a.push_back(arr[i]);
        a.push_back(arr[j]);
        sort(a.begin(),a.end());
        r.push_back(a);
        a.pop_back();
        a.pop_back();
    }
}   
    }
    sort(r.begin(),r.end());
    return r;
}
