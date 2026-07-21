class Solution {
    public int left(int[] arr, int target){
        int ans = -1;
        int l = 0;
        int r = arr.length-1;
        while(l<=r){
            int mid  = l + (r - l)/2;
            if(arr[mid]==target){
                ans = mid;
                r = mid -1; 
            }
            else if(arr[mid]>target)r=mid-1;
            else l=mid+1;
        }
        return ans;
    }

    public int right(int[] arr, int target){
        int ans  = -1;
        int l = 0, r = arr.length-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid]==target){
                ans = mid;
                l=mid+1;
            }
            else if(arr[mid]>target)r=mid-1;
            else l = mid + 1;
        }
        return ans; 
    }
    public int[] searchRange(int[] arr, int target) {
        int lans = left(arr, target);
        int rans = right(arr, target);
        int[] ans = {lans,rans};
        return ans;
    }
}