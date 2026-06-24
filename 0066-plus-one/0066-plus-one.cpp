class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int carry = 0;
        int sum = 0;
        for(int i=arr.size()-1;i>=0;i--){
            if(i==arr.size()-1)sum = 1 + arr[i];
            else sum = carry + arr[i];
            if(sum > 9){
                carry = 1;
                arr[i] = sum - 10;
            }
            else{
                carry = 0;
                arr[i] = sum;
            }
        }
        if(carry)arr.insert(arr.begin(),carry);
        return arr;

    }
};