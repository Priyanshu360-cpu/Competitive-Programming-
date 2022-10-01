class Solution {
public:
    map<map<int,pair<string,bool>>,bool> c;
    char output(string a){
        if(a.size()>=2&&a[0]=='0')return '-';
        if(stoi(a)+64>90||stoi(a)+64<65)return '-';
        else return stoi(a)+64;
    }
    int combo(map<int,pair<string,bool>>& d){
        if(c[d])return 0;
        c[d]=true;
        int e=0;
        for(auto x:d){
            if(d.find(x.first+1)!=d.end()){
            if(!d[x.first+1].second){
                string q="";
                q+=d[x.first].first;
                d[x.first].first+=d[x.first+1].first;
                d[x.first+1].second=true;
                char w=output(d[x.first].first);
                cout<<w;
                if(w=='-'){
                    d[x.first].first=q;
                    continue;
                }
                e+=1+combo(d);
                d[x.first].first=q;
                d[x.first+1].second=false;
            }
            }
        }
        return e;
    }
    int numDecodings(string s) {
        map<int,pair<string,bool>> d;
        for(int i=0;i<s.size();i++)d[i].first.push_back(s[i]);
        return combo(d);
    }
};
