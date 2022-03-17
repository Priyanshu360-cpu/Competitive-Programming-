#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxIndexDiff(int A[], int N) 
    { 
        int max=0;
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(((j-i)>max)&&(A[i]<=A[j])&&(i<=j)) max=j-i;
            }
        }
        return max;
    }
};


int main() 
{
    int T;
    cin>>T;
    while(T--){
        int num;
        cin>>num;
        int arr[num];
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxIndexDiff(arr, num)<<endl;
    }
    return 0;
}   
