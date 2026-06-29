class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int mx = arr[0];
        int sum=arr[0];
        for(int i=1;i<arr.size();i++){
            sum=max(arr[i],sum+arr[i]);
            mx=max(mx,sum);
        }
        return mx;
    }
};