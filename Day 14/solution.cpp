class Solution {
public:
    double angleClock(int hour, int minutes) {
        double h,m,diff;
        h=hour+((double)minutes/60);
        m=(double)minutes/5;
        diff=abs(h-m);
        cout<<diff<<" ";
        if(diff>=6)
            diff=12-diff;
        return diff*30;
    }
};