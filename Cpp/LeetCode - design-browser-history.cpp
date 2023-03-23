class BrowserHistory {
public:
string homepage;
    BrowserHistory(string homepage) {
       this->homepage=homepage;
    }
     map<int,string> a;
        int i=0;
        int curr=0;
    void visit(string url) {
        a[i]=url;
        i++;
        curr=i-1;
    }
    
    string back(int steps) {
        while(steps&&curr>=0){
            steps--;
            curr--;
        }
        if(curr<0){
        curr=i-1;
        return homepage;
        }
        return a[curr];
    }
    
    string forward(int steps) {
        while(steps&&curr<i){
        steps--;
        curr++;
        }
        if(curr>=i){
        curr=i-1;
        }
        i=curr+1;
        return a[curr];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
