class Solution {
public:
    int minMoves(vector<int>& arr) {
        int sum=0;
        sort(arr.begin(),arr.end());
        for(int x:arr)sum+=arr[arr.size()-1]-x;
        return sum;
    }
};