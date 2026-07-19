class Solution {
    public int thirdMax(int[] arr) {
        Arrays.sort(arr);
        int mx1=arr[arr.length-1];
        int mx2 = mx1;
        for(int i=arr.length-1;i>=0;i--){
            if(arr[i]<mx1){
                mx2 = arr[i];
                break;
            }
        }
        for(int i=arr.length-1;i>=0;i--){
            if(arr[i]<mx2){
                return arr[i];
            }
        }
        return mx1;
    }
}