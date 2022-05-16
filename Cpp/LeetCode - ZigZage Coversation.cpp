class Solution {
public:
    string convert(string s, int numRows) {
        numRows=numRows+2;
        string r="";
        
        for(int i=0;i<s.size();i++){
                   
            if(numRows>0){
                 numRows=numRows-(i+1);
            r=r+s[i];
            int j=i;
            while((j+numRows)<(s.size())){
                j=j+numRows;
                cout<<s[j];
                r=r+s[j];
            }}
        }
        return r;
    }
};
