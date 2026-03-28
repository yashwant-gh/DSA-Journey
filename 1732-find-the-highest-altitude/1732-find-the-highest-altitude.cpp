class Solution {
public:
    int largestAltitude(vector<int>& arr) {
        int mx = 0;
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            mx=max(mx,sum);
        }
        return mx;
    }
};