class Solution {
public:
    string convert(string s, int numRows) {
        numRows=numRows+1;
        string r="";
        
        for(int i=0;i<s.size();i++){
            r=r+s[i];
            int j=i;
            if(numRows!=0){
            while((j+numRows)<(s.size())){
                j=j+numRows;
                
                r=r+s[j];
            }}
        }
        return r;
    }
};
