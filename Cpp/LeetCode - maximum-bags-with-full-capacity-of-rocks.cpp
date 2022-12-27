/*
#Intuition
A kind of Problem which requires greedy approach

# Approach
Store the difference of capacity and rocks in an ordered map. now fill the bag with lesser difference first to make them filled first. after filling them up find the difference between original and final differences. Sum the already filled caskets to yield the final result .
# Complexity
- Time complexity:
O(nlogn)
- Space complexity:
O(n)

# Code
*/
class Solution {
public:
map<int,int> a;
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks)   {
        for(int i=0;i<capacity.size();i++){
            a[capacity[i]-rocks[i]]+=1;
        }//storing the differences
        map<int,int> b=a;//storing a copy
        for(auto x:a){
            if(x.first==0)continue;
            if(additionalRocks==0)break;
            int s=x.first*x.second;//checking the total no. capacities
            if(s>additionalRocks){
                int d=floor(additionalRocks/x.first);//rounding of to nearest decimal
                a[x.first]=a[x.first]-d;
                additionalRocks=0;
            }else{
                a[x.first]=0;//capacity is less so it gets filled
                additionalRocks-=s;
            }
        }     
        int s=b[0];//already filled caskets
        for(auto x:b){
            s+=b[x.first]-a[x.first];//finding the difference
        }
        return s;
     }
};
```
