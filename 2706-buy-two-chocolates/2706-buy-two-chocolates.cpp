class Solution {
public:
    int buyChoco(vector<int>& arr, int money) {
        sort(arr.begin(),arr.end());
        int sum=arr[0]+arr[1];
        if(sum>money) return money;
        return money-sum;
    }
};