class Solution {
public:
    bool canAliceWin(vector<int>& arr) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        int sums=0;
        int sumd=0;
        for(int x:arr){
            if(x<10)sums+=x;
        }
        sumd=sum-sums;
        if(sums!=sumd)return true;
        else return false;
    }
};