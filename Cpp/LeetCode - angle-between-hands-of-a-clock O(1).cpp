class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hr=30*hour+(0.5*minutes);
        hr=hr>=360?hr-360:hr;
        double m=6*minutes;
        if(m>hr)
        return m-hr<hr+(360-m)?m-hr:hr+(360-m);
        return hr-m<(360-hr)+m?hr-m:(360-hr)+m;
    }
};
