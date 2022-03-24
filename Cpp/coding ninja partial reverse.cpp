void reverseArray(vector<int> &arr , int m)
{
	vector<int> a;
    for(int i=m+1;i<arr.size();i++){
        a.push_back(arr[i]);
    }
     for(int i=m+1;i<arr.size();i++){
        arr[i]=a[a.size()-1];
         a.pop_back();
    }
}
