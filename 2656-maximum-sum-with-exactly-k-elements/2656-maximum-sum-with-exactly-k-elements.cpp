class Solution {
public:
    int maximizeSum(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size()-1;
        int sum=0;
        while(k--){
            sum+=arr[n];
            arr[n]++;
        }
        return sum;
    }
};