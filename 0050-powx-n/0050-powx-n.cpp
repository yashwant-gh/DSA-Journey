class Solution {
public:
    double myPow(double x, int n) {
        // if(n==0) return double(1);
        // double ans=x;
        // int lm=n;
        // if(n>0) {
        //      ans=x;
        // }
        // else {
        //      ans=1/x;
        //     n=-n;
        // }
        // for(int i=0;i<n-1;i++){
        //     if(lm<0) ans=ans*(1/x);
        //     else ans=ans*x;
        // }
        // return ans;
        return pow(x,n);
    }
};