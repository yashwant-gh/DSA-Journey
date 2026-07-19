class Solution {
    public int maxProfit(int[] arr) {
        int mx_profit = 0;
        int l =0, r = 1;
        while(r<arr.length){
            if(arr[r]<arr[r-1]){
                mx_profit+=arr[r-1] - arr[l];
                l=r;
            }
            r++;
        }
        if(l!=r-1)mx_profit+=arr[r-1]-arr[l];
        // mx_profit = Math.max(mx_profit, arr[arr.length - 1] - arr[0]);
        return mx_profit;
    }
}