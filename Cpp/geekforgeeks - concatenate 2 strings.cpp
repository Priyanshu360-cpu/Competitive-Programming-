
class Solution{
    public:
    long long countPairs(int N, int X, vector<int> numbers){
        vector<int> fino;
        long long e=0;
        for(int i=0;i<numbers.size();i++){
            int m=numbers[i];
            int k=0;
            while(m){
                m=m/10;
                k=k+1;
            }
            for(int h=0;h<numbers.size();h++){
                if(h==i) continue;
                else{
                    int j=numbers[h];
                    int d=0;
                    while(j){
                        j=j/10;
                        d=d+1;
                    }
                    int u=k+d;
                    int l=1;
                    while(u){
                        l=l*10;
                    }
                    int o=(numbers[i]*l)+numbers[h];
                    fino.push_back(o);
                }
            }
        }
        for(int i=0;i<fino.size();i++){
            if(fino[i]==X){
                e=e+1;
            }
        }
        return e;
    }
}; 

int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
} 
