class Solution {
public:
    int maxProduct(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        return (arr[arr.size()-2]-1)*(arr[arr.size()-1]-1);
    }
};