#pragma GCC optimize("Ofast")
    #pragma GCC optimization("unroll-loops")
    #include <bits/stdc++.h>
    using namespace std;
    #define fo(i,n) for(int i=0; i<n; i++)
    #define pb push_back
    #define mp make_pair
    #define el "\n"
    #define accuracy setprecision(20)
    #define vi vector<int>
    #define vll vector<ll>
    #define vpii vector<pair<int, int>>
    #define mii map<int, int>
    typedef long long int ll;
    #define F first
    #define S second
    #define IamSpeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    typedef long double ld;
        
    void delta(int T)
    {
    int n; string a,b; cin>>n>>a>>b;
        int x=-1;
    
    vi v;
    int eq=0; int ans =0;
    fo(i,n)
    {
        if(a[i]==b[i]) eq++;
        else if(a[i] < b[i])
        {
            v.pb(i);
            ans+=eq;
            eq=0;
        }
        else
        {
            eq=0;
        }
        
    }
    ans+= v.size();

    cout << ans << el;
    }

    int main()
    {
        
    int T=1;
    cin>>T;
    while (T--)
    {
    delta(T);
    }

    return 0;
    }
