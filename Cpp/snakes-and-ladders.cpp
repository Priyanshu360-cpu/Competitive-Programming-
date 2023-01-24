class Solution {
public:
int minpath(vector<int> d,int i){
    if(i==d.size()-1)return 0;
    if(d[i]==0)return INT_MAX-1000;
    d[i]=0;
    int p=INT_MAX-1000;
    for(int j=i+1;j<=i+6;j++){
        if(j+i>=d.size())break;
        if(d[j]==-1)
    p=min(p,1+minpath(d,j));
    else if(d[j]!=0){
    if(d[j]<=i)continue;//avoiding snake
    int g=d[j];
    d[j]=0;
p=min(p,2+minpath(d,g));//using available stack
       }
    }
    return p;
}    
    int snakesAndLadders(vector<vector<int>>& board) {
        vector<int> b;
        int k=0;
        for(int j=board.size()-1;j>=0;j--){
            if(k%2==0)
            for(int i=0;i<board[j].size();i++)b.push_back(board[j][i]);
            else
            for(int i=board[j].size()-1;i>=0;i--)b.push_back(board[j][i]);
            k+=1;
        }
        int d=minpath(b,0);
        return d<INT_MAX-1000?d:-1;
    }
};
