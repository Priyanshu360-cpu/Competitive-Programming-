class MyCalendar {
public:
    vector<pair<int,int>> a;
    MyCalendar() {
        a.clear();
    }
    
    bool book(int start, int end) {
        for(auto it:a){
            if(it.first<end&&it.second>start)return false;
        }
        a.push_back(pair<int,int>(start,end));
        return true;
    }
};
