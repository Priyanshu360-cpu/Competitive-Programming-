
class Solution {
public:
int n=0;
    int totalFruit(vector<int>& fruits) {
        int p=fruits[0];//fruit of type 1
        int l=fruits[0];//fruit of type 2
        int z=0,o=0;//counters for fruits
        int curr=fruits[0];//recent accessed fruit
        int curr_pos=0;//no. of times it was recently accessed
        for(int i=0;i<fruits.size();i++){
            if(l==fruits[i])z+=1;//found fruit of type1
            else if(p==fruits[i])o+=1;//of type 2
            else{//different type found
                if(curr==p){
                    l=fruits[i];//change type of least recent accessed
                    o=1;//move back to 1
                    z=curr_pos;//change it to no. of times recently used
                }else{//same for other type                    
                    p=fruits[i];
                    z=1;
                    o=curr_pos;
                }
            }
            if(fruits[i]==curr)curr_pos+=1;//check if recently accessed was changed
            else{curr=fruits[i];curr_pos=1;}
            n=max(n,z+o);
        }
    return n;
    }
};
