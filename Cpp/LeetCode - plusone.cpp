class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int c=0;
        digits[digits.size()-1]=digits[digits.size()-1]+1;
        if(digits[digits.size()-1]>=10){
            c=digits[digits.size()-1]/10;
            digits[digits.size()-1]=digits[digits.size()-1]%10;
        }  
        for(int i=digits.size()-2;i>=0;i--){
            if(digits[i]+c>=10){
                int g=digits[i]+c;
                digits[i]=(digits[i]+c)%10;
                c=g/10;
            }
            else{
                digits[i]=digits[i]+c;
                c=0;
            }
        }
        if(c!=0){
            vector<int> rs;
            rs.push_back(c);
            for(int i=0;i<digits.size();i++) rs.push_back(digits[i]);
            digits=rs;
        }
        return digits;
    }
};
