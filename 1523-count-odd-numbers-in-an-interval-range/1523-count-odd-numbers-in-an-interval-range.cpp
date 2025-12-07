class Solution {
public:
bool iseven(int x){
    if(x%2==0)return true;
    return false;
}
    int countOdds(int low, int high) {
        int dif=(high-low);
        if(iseven(low) && iseven(high)) return dif/2;
        else if (!iseven(low) && !iseven(high)) return (dif-1)/2 +2;
        else return (dif-1)/2 +1;
    }
};