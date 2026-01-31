class Solution {
public:
    int maxSubArray(vector<int>& arr) {
    int sum = 0;
    int r = 0;
    int ans = INT_MIN;

    while(r<arr.size()){
        sum += arr[r++];
        ans = max(ans, sum);
        if(sum<0)sum=0;  
    }
    return ans;
    }
};