class Solution {
public:
    int maximumDifference(vector<int>& arr) {
        int smallest=arr[0];
        int mx_difference=-1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<=smallest)smallest=arr[i];
            else mx_difference=max(mx_difference,arr[i]-smallest);
        }
        return mx_difference;
    }
};