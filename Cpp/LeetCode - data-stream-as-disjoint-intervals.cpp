class SummaryRanges {
public:
vector<int> a;
vector<int>::iterator it;
    SummaryRanges() {}
    void addNum(int val) {
        it=find(a.begin(),a.end(),val);
        if(it==a.end())//store unique items
        a.push_back(val);
    }
    int solution(vector<int>& a,int i){
        int j=0;
        for(int k=i;k<a.size();k++){
            if(a[k]==a[i]+j){//increasing elements
                j++;
                continue;
            }
            else return k-1;//last increasing or same element 
        }
        return a.size()-1;//if all elements are set
    }
    vector<vector<int>> getIntervals() {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
         vector<int> d;
        for(int i=0;i<a.size();i++){
            d={};
            d.push_back(a[i]);//store inital  element
            i=solution(a,i);//update the index
            d.push_back(a[i]);
            ans.push_back(d);
        }
        return ans;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(val);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */
