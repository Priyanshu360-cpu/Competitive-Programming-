class Solution {
public:
    string addBinary(string a, string b) {
        string s="";
        int carry=0;
        int x=a.size()>b.size()?a.size():b.size();
        for(int i=x-1;i>=0;i--){
            if(a[i]=='1'&&b[i]=='1'){
                if(carry==1){
                    s=s+'1';
                }else{
                    s=s+'0';
                    carry=1;
                }
            }else if(a[i]=='1'&&b[i]=='0'||a[i]=='0'&&b[i]=='1'){
                if(carry==1){
                    s=s+'0';
                }else{
                    s=s+'1';
                    carry=0;
                }
            }else if(!a[i]){
               if(carry==1){
                   if(b[i]=='1'){
                       s=s+'0';
                   }else{
                       s=s+'1';
                       carry=0;
                   }
               }else{
                   s=s+b[i];
               }
            }else if(!b[i]){
               if(carry==1){
                   if(a[i]=='1'){
                       s=s+'0';
                   }else{
                       s=s+'1';
                       carry=0;
                   }
               }else{
                   s=s+a[i];
               }
            }
        }
        if(carry==1){
            s=s+'1';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
