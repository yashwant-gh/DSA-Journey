class Solution {
    public int[] plusOne(int[] arr) {
        int carry = 1, sum =0;
        ArrayList <Integer> ans = new ArrayList<>();
        for(int i = arr.length -1; i>=0;i--){
            sum =carry + arr[i];
            int digit  = sum%10;
            ans.add(0,digit);
            carry = sum>9?1:0;
        }
        if(carry==1)ans.add(0,1);
        int [] ans1 =new int[ans.size()];
        for(int i=0;i<ans.size();i++)ans1[i] = ans.get(i);
        return ans1;
    }
}