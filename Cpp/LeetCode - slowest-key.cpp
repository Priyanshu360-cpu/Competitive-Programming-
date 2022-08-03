// Solution 1
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int b=releaseTimes[0];
        for(int i=1;i<releaseTimes.size();i++){
            int k=releaseTimes[i];
            releaseTimes[i]-=b;
            b=k;
        }
       map<int,char> a;
       for(int i=0;i<releaseTimes.size();i++){
           if(a[releaseTimes[i]]!=0){
               if((keysPressed[i])>a[releaseTimes[i]]){
                   a[releaseTimes[i]]=(keysPressed[i]);
               }
           }else{
                a[releaseTimes[i]]=(keysPressed[i]);
           }
       }
        return a[a.rbegin()->first];
    }
};

// Solution 2

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int b=releaseTimes[0];
        for(int i=1;i<releaseTimes.size();i++){
            int k=releaseTimes[i];
            releaseTimes[i]-=b;
            b=k;
        }
       map<int,vector<int>> a;
       for(int i=0;i<releaseTimes.size();i++){
           a[releaseTimes[i]].push_back((int)keysPressed[i]);
       }
        if(a[a.rbegin()->first].size()>1){
          sort(a[a.rbegin()->first].begin(),a[a.rbegin()->first].end());
            return char((a[a.rbegin()->first][a[a.rbegin()->first].size()-1]));
        }
        return a[a.rbegin()->first][0];
    }
};
