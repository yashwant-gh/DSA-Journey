class Solution {
    public void rev(int[] arr){
        for(int i =0;i<arr.length/2;i++){
            int temp = arr[i];
            arr[i] = arr[arr.length-1-i];
            arr[arr.length-1-i] = temp; 
        }
    }
    public void nextPermutation(int[] arr) {
        if(arr.length==1)return;
        int r = arr.length-2;
        while(r>=0 && arr[r]>=arr[r+1]){
            if(r==0){
                rev(arr);
                return;
            }
            r--;
        }
        int pv = arr.length-1;
        while(pv>r){
            if(arr[pv]>arr[r]){
                int temp = arr[r];
                arr[r] = arr[pv];
                arr[pv] = temp;
                break;
            }
            pv--;
        }
        Arrays.sort(arr,r+1, arr.length);
    }
}