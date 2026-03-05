class Solution {
public:
int digsum(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x=x/10;
    }
    return sum;
}
    int differenceOfSum(vector<int>& arr) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        int disum=0;
        for(int i=0;i<arr.size();i++){
            disum+=digsum(arr[i]);
        }
        return abs(sum - disum);
    }
};