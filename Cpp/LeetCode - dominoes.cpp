class Solution {
public:
    string pushDominoes(string dominoes){
        string d="";
        int j=0;
       for(int i=0;i<dominoes.size();i++){
           if(dominoes[i]=='L'){
               if(i<=j||j==0)
               for(int h=i;h>=j;h--)d.push_back('L');
               else{
                   if((j)%2!=0){
                       d.push_back('L');
                       int f=j/2;
                       cout<<i+f+1;
                       for(int g=i-f-1;g<i;g++)d[g]='L';
                       d[i-f-1]='.';
                   }else{
                        int f=j/2;
                       d.push_back('L');
                       for(int g=i-f;g<i;g++)d[g]='L';
                   }
               }
               j=0;
           }
       else if(dominoes[i]=='R') {
           if(j!=0){
               for(int g=j;g>0;g--)d.push_back('.');
           }
           while(dominoes[i]=='.'||dominoes[i]=='R'){
               d.push_back('R');
               if(dominoes[i]=='.')j++;
               i+=1;
           }
           i-=1;
                      cout<<j;

       }
           else j++;
       }
        return d;
    }
};
