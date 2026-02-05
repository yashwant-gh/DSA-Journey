class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        int ans=sum%k;
        if(sum<k)return sum;
        return ans;
    }
};