class Solution {
public:
    void add(vector<int>& a,int k){
        vector<int> b;
        if(a.size()<=k)return;
        int i=0;
        for(i;i<a.size()-k;i++){
            int s=0;
            for(int c=0;c<k;c++){
                s=s+a[i+c];
            }
            i=i+k-1;
            if(s>=10){
                int p=0;
                while(s>=10){
                    s=s-10;
                    p=p+1;
                }
                b.push_back(p);
                b.push_back(s);
            }else
            b.push_back(s);
        }
        if(i<a.size()){
            int s=0;
            while(i<a.size()){
                s=s+a[i];
                i=i+1;
            }
             if(s>=10){
                int p=0;
                while(s>=10){
                    s=s-10;
                    p=p+1;
                }
                b.push_back(p);
                b.push_back(s);
            }else
            b.push_back(s);
        }
        a=b;
        add(a,k);
    }
    string digitSum(string s, int k) {
        if(s.size()<=k) return s;
        vector<int> a;
        for(int i=0;i<s.size();i++){
           int intdata;
               stringstream obj;  
     obj << s[i];  
     obj >> intdata; 
            a.push_back(intdata);
        }
        add(a,k);
        string gh="";
        for(int i=0;i<a.size();i++){
                ostringstream str1;
str1<<a[i];
            gh=gh+str1.str();;
        }
        return gh;
    }
};
