class Solution {
public:
    string arrangeWords(string text) {
        vector<string> a;
        string gh="";
        for(auto x:text){
            if(x==' '){
                a.push_back(gh);
                gh="";
            }else gh=gh+x;
        }
        a.push_back(gh);
        for(int i=1;i<a.size();i++){
            int j=i-1;
            int key=a[i].size();
            string p=a[i];
            while(j>=0&&a[j].size()>key){
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=p;
        }
        string rh="";
        for(int i=0;i<a.size()-1;i++){
                transform(a[i].begin(), a[i].end(), a[i].begin(), ::tolower);
            rh=rh+a[i]+" ";
        }
        if(a.size()){
             transform(a[a.size()-1].begin(), a[a.size()-1].end(), a[a.size()-1].begin(), ::tolower);
            rh=rh+a[a.size()-1];}
        if(rh.size())rh[0]=toupper(rh[0]);
        return rh;
    }
};
