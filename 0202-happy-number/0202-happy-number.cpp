class Solution {
public:
int sos(int x){
    int digit=0;
    int sum=0;
    while(x){
        digit=x%10;
        sum+=digit*digit;
        x=x/10;
    }
    return sum;
}
    bool isHappy(int n) {
        while(n>=10){
            n=sos(n);
        }
        if(n==1 || n==7) return true;
        return false;
    }
};