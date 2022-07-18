class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> a;
        for(int i=0;i<arr.size();i++){
            a.insert(pair<string,int>(arr[i],0));
        }
      for(int i=0;i<arr.size();i++){
          a[arr[i]]=a[arr[i]]+1;
      }
       for(int i=0;i<arr.size();i++){
           if(a[arr[i]]==1){
               if(k==1) return arr[i];
               k=k-1;
               if(k<1) break;
           }
       } 
        string g="";
        return g;
    }
};
