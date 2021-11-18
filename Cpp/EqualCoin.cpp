#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==0)
        {
            if(y%2==0)
            {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else if(y ==0)
        {
            if(x%2==0)
            {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else
        {
            int sum = x+2*y;
            if(sum%2==0)
            {
                cout<<"YES"<<endl;
            }else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}