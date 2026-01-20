class Solution {
public:
int rev(int n,int re=0){
    if(n==0)return re;
    return rev(n/10,re*10+n%10);
}
    int mirrorDistance(int n) {
        return abs(n-rev(n));
    }
};