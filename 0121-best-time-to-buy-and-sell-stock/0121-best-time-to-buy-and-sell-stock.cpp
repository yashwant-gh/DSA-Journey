class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int smallest=arr[0];
        int mx_profit=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<smallest)smallest=arr[i];
            else mx_profit=max(mx_profit,arr[i]-smallest);
        }
        return mx_profit;
    }
};