class Solution {
public:
    string addBinary(string a, string b) {
        string s="";
        int c=0;
while(a.size()||b.size()){
      L:
    string r="";
    if(a.size())
        r=r+a[a.size()-1];
        string y="";
    if(b.size())
        y=y+b[b.size()-1];
    if(a.size()&&b.size()){
        if(stoi(r)+stoi(y)+c==2){
            s=s+'0';            
            c=1;
    }else if(stoi(r)+stoi(y)+c==1){
            s=s+'1';            
            c=0;
        }else if(stoi(r)+stoi(y)+c==3){
            s=s+'1';           
            c=1;
        }else if(stoi(r)+stoi(y)+c==0){
            s=s+'0';
            c=0;
        }
        a.pop_back();
        b.pop_back();
}
    else if(a.size()&&!b.size()){
        if(stoi(r)+c==1){
          s=s+'1';          
          a.pop_back();
        }else if(stoi(r)+c==0){
              s=s+'0';
          a.pop_back();
        }else if(stoi(r)+c==2){
            s=s+'0';
            c=1;
            a.pop_back();
            goto L;
        }
        c=0;
    }
    else if(!a.size()&&b.size()){
        if(stoi(y)+c==1){
            s=s+'1';
            b.pop_back();
        }else if(stoi(y)+c==0){
          s=s+'0';
          b.pop_back();
        }else if(stoi(y)+c==2){
            s=s+'0';
            c=1;
            b.pop_back();
            goto L;
        }
        c=0;
    }
}
        if(c==1)s=s+'1';
        reverse(s.begin(),s.end());
        return s;
    }
};
