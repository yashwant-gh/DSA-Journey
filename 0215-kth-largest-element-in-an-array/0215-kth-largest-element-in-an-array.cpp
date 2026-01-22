class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end(),greater<int>());
        int i=0;
        k--;
        while(k--)i++;
        return arr[i];
        

    }
};