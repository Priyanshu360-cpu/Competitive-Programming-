class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> a;
      for(int i=0;i<words1.size();i++)
          a[words1[i]]=a[words1[i]]+3;
        for(int i=0;i<words2.size();i++)
          a[words2[i]]=a[words2[i]]+2;
        int p=0;
         for(int i=0;i<words1.size();i++)
             if(a[words1[i]]==5) p=p+1;
        return p;
    }
};
