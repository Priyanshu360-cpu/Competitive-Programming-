vector<vector<int>> pairSum(vector<int> &arr, int s){
vector<vector<int>> r;
    for(int i=0;i<arr.size();i++){
        int x=i+1;
        while(x<arr.size()+1){
             int d=arr[i];
            x++;
            vector<int> a;
            a.push_back(arr[i]);
         for(int j=x;j<arr.size();j++){
             d=d+arr[j];
             a.push_back(arr[j]);
             if(d==s){
                 sort(a.begin(),a.end());
                 r.push_back(a);
             }
         }
            
           
    }
        vector<int> aa;
         aa.push_back(arr[i]);
            int l=arr[i];
            for(int j=i+1;j<arr.size();j++){
                l=l+arr[j];
                aa.push_back(arr[j]);
                if(l==s){
                    sort(aa.begin(),aa.end());
                         r.push_back(aa);
                break;}
                
            }
    }
    sort(r.begin(),r.end());
    return r;
}
