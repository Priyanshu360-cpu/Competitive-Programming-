\\ Brute Force 
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
            while(i>0&&height[i-1]<height[p]){
                l=1;
                cout<<height[p]<<p<<endl;
                if(m<=height[i-1]){
                    m=height[i-1];
                    j=i-1;
                }
                i=i-1;
            }
            if(i>0&&height[i-1]>m&&height[p]>m){
                m=height[p];
                j=i-1;
                if(i-1==0)l=1;

            }
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

\\ Better Approach

class Solution {
public:
    int trap(vector<int>& height) {
        int left[height.size()];
        int right[height.size()];
        left[0]=height[0];
        for(int i=1;i<height.size();i++){
            left[i]=max(height[i],left[i-1]);
        }
        right[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        int c=0;
        for(int i=1;i<height.size()-1;i++){
            int d = min(left[i-1],right[i+1]);
            if(d>height[i])c+=d-height[i];
        }
        return c;
    }
};
