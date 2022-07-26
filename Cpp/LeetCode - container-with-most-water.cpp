class Solution {
public:
    int maxArea(vector<int>& height) {
                int ms=0;
        for(int i=0;i<height.size();i++){
            for(int j=height.size()-1;j>=0;j--){
                if(height[i]>height[j])ms=ms>((j-i)*height[j])?ms:((j-i)*height[j]);
                else if(height[i]==height[j]){
                ms=ms>((j-i)*height[j])?ms:((j-i)*height[j]);
                break;
                }
                else{
                ms=ms>((j-i)*height[i])?ms:((j-i)*height[i]);
                break;
                }
           }
        }
        return ms;
    }
};
