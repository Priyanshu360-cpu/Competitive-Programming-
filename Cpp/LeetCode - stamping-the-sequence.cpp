class Solution {
public:
    void doit(vector<vector<int>>& a,string b,vector<int> c,int w,string target,string stamp,map<string,int>& q){
        cout<<b<<endl;
        if(w>=10*target.size())return;
        if(b==target){
            cout<<b<<"1"<<endl;
            a.push_back(c);
            return;
        }else{
            for(int i=0;i<=target.size()-stamp.size();i++){
            string d=b;
            int g=0;
            for(int j=i;j<i+stamp.size();j++){
                if(j>=target.size())break;
                b[j]=stamp[g];
                g+=1;
            }
                if(q[b]==1)continue;
                else q[b]=1;
                c.push_back(i);
            doit(a,b,c,w+1,target,stamp,q);
                c.pop_back();
            b=d;
        }
        }
    }
    vector<int> movesToStamp(string stamp, string target) {
        vector<vector<int>> a;
        vector<int> n;
        if(stamp.size()>target.size())return n;
        else if(stamp.size()==target.size()){
n.push_back(0);
        return n;}
        int h=0;
        map<string,int> q;
        string b="";
        for(auto x:target)b=b+"?";
        for(int i=0;i<target.size()-stamp.size();i++){
            string d=b;
            int g=0;
            for(int j=i;j<i+stamp.size();j++){
                if(j>=target.size())break;
                b[j]=stamp[g];
                g+=1;
            }
            q[b]=1;
            vector<int> c;
            c.push_back(i);
            doit(a,b,c,1,target,stamp,q);
            b=d;
        }
sort(a.begin(),a.end());
        cout<<a.size();
        return a[0];
    }
};
