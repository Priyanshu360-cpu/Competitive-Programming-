#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,f=0;
        cin>>n;
        map<ll, ll> m;
        vector<ll> res, v;
        for(ll i=0;i <n; i++){
            cin>>x;
            m[x]++;
        }

        for(auto x: m){
            if(x.second > 2)
            {
                f=1;
                break;
            }
            v.push_back(x.first);
        }

        sort(v.begin(), v.end());
        if(f==1 || m[v[v.size()-1]] == 2){
            cout<<-1<<endl;
        }
        else
        {
            for(ll i=0;i<v.size(); i++)
            {
                if(m[v[i]]==2)
                {
                    cout<<v[i]<<" ";
                }

            }

            for(ll i = v.size()-1; i>=0; i--)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}