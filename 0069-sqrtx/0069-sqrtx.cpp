class Solution {
public:

unsigned int bin(int x){
    int l=1;
    int h=x/2; //sq. root will only be less or eual to half
    int ans=-1;
    while(l<=h){
       long long  mid=l+(h-l)/2;
        // if(mid*mid ==x || (((mid+1)*(mid+1)>x) && ((mid-1)*(mid-1)<x) )) return mid;
        if(mid*mid <=x){
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    return ans;
}
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        int ans=bin(x);
        return ans;
    }
};