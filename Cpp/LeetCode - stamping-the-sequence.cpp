class Solution {
public:
    void doit(vector<int>& a,string b,vector<int> c,int w,string target,string stamp,int* h,map<string,int>& q){
        if(*h==1)return;
        if(w>=10*target.size())return;
        if(b==target){
            a=c;
            *h=1;
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
            doit(a,b,c,w+1,target,stamp,h,q);
                c.pop_back();
            b=d;
        }
        }
    }
    vector<int> movesToStamp(string stamp, string target) {
        vector<int> a;
        if(stamp.size()>target.size())return a;
        else if(stamp.size()==target.size()){
a.push_back(0);
        return a;}
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
            doit(a,b,c,1,target,stamp,&h,q);
            b=d;
        }

        return a;
    }
};
