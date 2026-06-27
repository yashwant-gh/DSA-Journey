class Solution {
public:
    double angleClock(int hr, int minu) {
        double ans= abs(30*hr - (11*minu)/2.00);
        if(ans>180)ans=360.00-ans;
        return ans; 
    }
};