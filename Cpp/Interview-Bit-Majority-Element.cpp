int Solution::majorityElement(const vector<int> &A) {
  
    for(int i=0;i<A.size();i++){
        int c=0;
        for(int j=i+1;j<A.size();j++){
           if(A[i]==A[j])c=c+1;
        }
        if(c>=(A.size()/2))
         return A[i];
    }
    return A[0];
}
