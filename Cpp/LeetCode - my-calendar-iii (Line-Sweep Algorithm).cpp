class MyCalendarThree {
public:
map<int,int> a;
    MyCalendarThree() {
    }
    int book(int start, int end) {
        a[start]+=1;
        a[end]-=1;
        int k=0,m=0;
        for(auto x:a){
            k+=x.second;
            m=max(k,m);
        }
        return m;
    }
};
