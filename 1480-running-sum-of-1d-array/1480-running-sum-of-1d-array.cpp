class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        vector<int>ans;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            ans.push_back(sum);
        }
        return ans;
    }
};