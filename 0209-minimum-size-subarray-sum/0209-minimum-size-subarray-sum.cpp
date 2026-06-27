class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int l,r,sum =0;
        int ans =INT_MAX;
        while(r<arr.size()){
            sum +=arr[r];
            while(sum>=target){
                ans = min(ans,r-l+1);
                sum-=arr[l++];
            }
            r++;
        }
        return ans==INT_MAX?0:ans;
    }
};