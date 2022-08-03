class MyCalendarTwo {
public:
    vector<pair<int,int>> a;
    map<pair<int,int>,int> b;
    MyCalendarTwo() {
        a.clear();
    }
    bool book(int start, int end) {
        for(auto i:a){
            if(i.first<end&&i.second>start){
                if(b[pair<int,int>(i.first,i.second)]<=1)b[pair<int,int>(i.first,i.second)]+=1;
                else return false;
            }
        }
        a.push_back(pair<int,int>(start,end));
        b[pair<int,int>(start,end)]+=1;
        return true;
    }
};
