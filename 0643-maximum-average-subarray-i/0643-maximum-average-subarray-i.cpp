class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        double currsum=0,maxsum=DBL_MIN;
        for(int i=0;i<k;i++){
            currsum+=arr[i];
            maxsum=currsum;
        }
        for(int i=k;i<arr.size();i++){
            currsum+=arr[i]-arr[i-k];
            maxsum=max(maxsum,currsum);
        }
        return maxsum/k;
    }
};