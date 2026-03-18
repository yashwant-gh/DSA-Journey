class Solution {
public:
    int alternatingSum(vector<int>& arr) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        int sume=0;
        for(int i=0;i<arr.size();i=i+2)sume+=arr[i];
        int ans=(2*sume)-sum;
        return ans;
    }
};