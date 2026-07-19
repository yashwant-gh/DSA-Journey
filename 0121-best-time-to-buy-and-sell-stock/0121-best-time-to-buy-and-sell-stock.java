class Solution {
    public int maxProfit(int[] arr) {
        int mn = arr[0];
        int ans  = 0,l=0,r=1;
        while(r< arr.length){
            if(arr[r]<arr[l]){
                l=r;
            }
            else{
                ans = Math.max(ans,arr[r]-arr[l]);
            }
            r++;
        }
        return ans;
    }
}