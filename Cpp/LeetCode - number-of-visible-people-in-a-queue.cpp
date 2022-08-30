//Stack Solution

class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        vector<int> a(heights.size(),0);
        stack<int> s;
        s.push(heights[heights.size()-1]);
        for(int i=heights.size()-2;i>=0;i--){
            int f=0;
            while(!s.empty()&&s.top()<=heights[i]){
                f++;
                s.pop();}
            if(s.empty())a[i]=f;
            else a[i]=f+1;
            s.push(heights[i]);
        }
        return a;
    }
};

//Brute Force Method

class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        vector<int> a(heights.size(),0);
        for(int i=1;i<heights.size();i++){
            if(heights[i]>heights[i-1]){
                a[i-1]+=1;
                continue;
            }
            int max=heights[i];
            a[i-1]+=1;
            for(int j=i+1;j<heights.size();j++){
                if(heights[j]>heights[i-1]){
                    a[i-1]+=1;
                    break;
                }
            if(heights[j]>=max){
                max=heights[j];
                a[i-1]+=1;
            }
                else continue;
            }
        }
        return a;
    }
};
