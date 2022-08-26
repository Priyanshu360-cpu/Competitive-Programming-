class Solution {
public:
    bool tryit(vector<int>& a,vector<int> b){
        if(a==b) return false;
        int x=0;
        if(a[0]==0)goto L;
        for(int i=0;i<a.size();i++){
            x=x*10+a[i];
        }
        if(pow(2,floor(log(x)/log(2)))==x)return true;
        else{
            L:
             int k=a[0];
        for(int i=0;i<a.size()-1;i++){
            a[i]=a[i+1];
        }
            
        a[a.size()-1]=k;
            return false||tryit(a,b);
        }
    }
    bool reorderedPowerOf2(int n) {
        vector<int> a;
        int x=n;
        if(pow(2,floor(log(n)/log(2)))==n) return true;
        while(x){
            a.push_back(x%10);
            x/=10;};
        vector<int> b=a;
        int k=a[0];
        for(int i=0;i<a.size()-1;i++){
                cout<<a[i];
            a[i]=a[i+1];
        }
        a[a.size()-1]=k;
        
        return n==1?true:(false||tryit(a,b));
    }
};
