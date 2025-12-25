class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        long long sum=0;
        for(int i=0;i<k;i++){
            if(arr.back()-i<0) break;
            if((arr.back()-i)>=0) sum+=arr.back()-i;
            arr.pop_back();
        }
        return sum;
    }
};