lass Solution {
public:
    bool detectCapitalUse(string word) {
        int s=0;
        for(int i=0;i<word.size();i++){
            if((int)word[i]>=97){
                if(s==1)return false;
                s=2;
                cout<<i;
            }else{
                if(i==0)continue;
                else{
                    if(s==2)return false;
                    s=1;
                }
            }
        }
        return true;
    }
};
