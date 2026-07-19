class Solution {
    public void moveZeroes(int[] arr) {
        int zero_size=0;
        for(int i =0;i<arr.length;i++){
            if(arr[i]==0)zero_size++;
            else if (zero_size > 0){
                int temp = arr[i];
                arr[i-zero_size] = temp;
                arr[i] = 0;
            }
        }
    }
}