// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
      
   int x = sizeof(arr) / sizeof(arr[0]);
 sort(arr, arr + x);
  for(int i=0;i<n;i++) cout<<arr[i]<<"\n";
 int p=0;
 int skip=0;
 for(int i=0;i<n;i++){
     if(arr[i]>0){
         for(int j=i+1;j<n;j++){
             if(arr[i]+1==arr[j]){
                 skip=1;
             }
         }
         if(skip==1){
             skip=0;
             continue;
         }else{
             p=arr[i]+1;
         }
     }
 }
 return p;
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
