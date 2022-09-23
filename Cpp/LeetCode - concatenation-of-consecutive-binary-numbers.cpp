class Solution {
public:
    int solution(int l,string b){
        if(l==-1)return 0;
        string s="";
        s=s+b[l];
        long num=stoi(s);
        long p=1;
        for(int i=0;i<b.size()-1-l;i++){
       p=p*2%1000000007;}
        p=p*num%1000000007;
        return ((p)%1000000007+(solution(l-1,b))%1000000007)%1000000007;
}
    int concatenatedBinary(int n) {
        string binary;
        for(int i=1;i<=n;i++){
        string b= bitset<64>(i).to_string();
b.erase(0, b.find_first_not_of('0'));
            binary+=b;
}
        return solution(binary.size()-1,binary)%1000000007;
    }
};
