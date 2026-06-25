class Solution {
public:
    int maxProfit(vector<int>& arr) {
        bool hold = false;
        int total_profit = 0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1] && !hold){
                total_profit-=arr[i-1];
                hold = true;
            }
            else if(arr[i]<arr[i-1] && hold){
                total_profit+=arr[i-1];
                hold = false;
            }
            if(hold && i==arr.size()-1)total_profit+=arr[i];
        }
        return total_profit;
    }
};