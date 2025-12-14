class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0;
        int p=1;
        int dig;
        while(n){
            dig=n%10;
            s+=dig;
            p*=dig;
            n/=10;
        }
        return p-s;
    }
};