class Solution {
public:
map<int,int> b;//for storing path of node 1
map<int,int> c;//for storing max values
void first(int i,vector<int>& dp,vector<int>& edges,int p){
    if(i==-1)return;//reached end
    if(dp[i]!=-1)return;
    dp[i]=0;//marking as visited
    b[i]=p;// storing steps for node 1.
    first(edges[i],dp,edges,p+1);
}
void second(int i,vector<int>& dp,vector<int>& edges,int p){
    if(i==-1)return;
    if(dp[i]!=-1)return;
    dp[i]=0;
    if(b.find(i)!=b.end()){//if path is found for node 1
        int d=max(p,b[i]); //max of both the node at same time
        if(c.find(d)!=c.end())c[d]=min(i,c[d]);//min nodes for same value at same time
        else c[d]=i;
    }
    second(edges[i],dp,edges,p+1);
}
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vector<int>dp (edges.size(),-1);
        vector<int>dp1 (edges.size(),-1);
        first(node1,dp,edges,0);
        second(node2,dp1,edges,0);
        int d=c.size();//if empty no common nodes
        return d==0?-1:c[c.begin()->first];
    }
};
