class Solution {
public:
    string longestPalindrome(string s) {
    int N=s.size();
    bool a[N][N];
    int palindrome_begins_at = 0;
    int palindrome_length = 1;
    memset(a, false, sizeof(bool)*N*N);
        for(int i=0;i<s.size();i++){
            a[i][i]=true;
        }
         for(int i=0;i<s.size()-1;i++){
          if (s.at(i) == s.at(i+1)) {
            a[i][i+1] = true;
              palindrome_begins_at=i;
              palindrome_length=2;
        }
}
        for (int len=3; len <= N; len++) {
        for (int i=0; i < N-len+1; i++) { 
            int j = i+len-1;    
            if (s[i] == s[j] and a[i+1][j-1] == true) {
                a[i][j] = true;
                if (len > palindrome_length) {
                    palindrome_begins_at = i;
                    palindrome_length = len;
                }
            }
        }
    }
        return s.substr(palindrome_begins_at, palindrome_length);
    }
};
