class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<=2) return 0;
        int w=0;
        for(int i=height.size()-1;i>0;i--){
            int p=i;
            int m=0;
            int j=0;
            int l=0;
            while(i>0&&height[i-1]<=height[p]){
                l=1;
                if(m<=height[i-1]){
                    m=height[i-1];
                    j=i-1;
                }
                i=i-1;
            }
            if(i>0&&height[i-1]>m&&height[p]>m){
                m=height[p];
                j=i-1;
                
            }
            if(j!=0)i=j;
            if(l==1){
                for(int q=p-1;q>=j;q--){
                    if(m<height[q])continue;
                    w=w+(m-height[q]);
                    cout<<m<<height[q]<<q<<endl;
                }
            }else{
                if(p==height.size()-1) continue;
                if(i!=0)w=w+(height[i-1]-height[i]);
            }
        }
        return w;
    }
};
