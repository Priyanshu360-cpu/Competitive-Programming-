class Solution {
public:
    int countPrimes(int n) {
        vector<bool> a(n,false);
        for(int i=2;i<n;i++){
            if(a[i])continue;
            if((i*i)>n)break;
            for(int j=i*i;j<n;j+=i){
                if(j%i==0&&a[j]==false)a[j]=true;
            }
        }
        int j=0;
        for(int i=2;i<n;i++)if(!a[i])j+=1;
        return j;
    }
};
