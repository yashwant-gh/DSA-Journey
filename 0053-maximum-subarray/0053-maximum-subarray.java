class Solution {
    public int maxSubArray(int[] arr) {
        int r=0,sum=0,ans = Integer.MIN_VALUE;
        while(r<arr.length){
            sum+=arr[r++];
            ans =Math.max(ans,sum);
            if(sum<0)sum=0;
        }
        return ans;
    }
}