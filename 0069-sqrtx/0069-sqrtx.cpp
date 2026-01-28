class Solution {
public:

unsigned int bin(int x){
    int left=0;
    int right=x/2; //sq. root will only be less or eual to half
    while(left<=right){
       long long  mid=left+(right-left)/2;
        // if(mid*mid ==x || (((mid+1)*(mid+1)>x) && ((mid-1)*(mid-1)<x) )) return mid;
        if(mid*mid==x) return mid;
        if( ((mid+1)*(mid+1)>x) && ((mid-1)*(mid-1)<x) ){
            if(mid*mid >x) return mid-1;
            return mid;
        }
        if(mid*mid<x) left=mid+1;
        else right=mid-1;
    }
    return -1;
}
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        // if(x==2) return 1;
        int ans=bin(x);
        return ans;
    }
};