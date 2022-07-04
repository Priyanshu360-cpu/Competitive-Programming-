class Solution {
public:
    int candy(vector<int>& ratings) {
      vector<int> check;
        if(ratings.size()==1) return 1;
        for(int i=0;i<ratings.size();i++){
            check.push_back(1);
        }
        for(int i=0;i<check.size()-1;i++){
            if(i==0){
                continue;
            }else{
                if(ratings[i]>ratings[i+1])check[i]=check[i]+check[i+1];
                    if(ratings[i]>ratings[i-1])check[i]=check[i]+check[i-1];
                    if(ratings[i]==ratings[i-1]&&ratings[i]==ratings[i+1]) check[i]=check[i-1];
            }   
        }
      if(ratings[0]>ratings[1])
     {check[0]=check[1]+check[0];
      cout<<check[0];} if(ratings[ratings.size()-1]>ratings[ratings.size()-2])check[check.size()-1]=check[check.size()-1]+check[check.size()-2];
        else if(ratings[ratings.size()-1]<ratings[ratings.size()-2])check[check.size()-2]=check[check.size()-2]-1;
        int c=0;
        for(int i=0;i<check.size();i++) c=c+check[i];
        return c;
    }
};
