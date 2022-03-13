#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        vector<int> a;
        for(int i=0;i<n;i++){
            int h=arr[i];
            if(h==0) return true;
            for(int j=i+1;j<n;j++){
                h=h+arr[j];
                if(h==0) return true;
            }
        }
        return false;
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
} 
