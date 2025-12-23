class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        vector<int>arr1(arr.begin(),arr.begin()+n);
        vector<int>arr2(arr.begin()+n,arr.begin()+2*n);
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(arr1[i]);
            ans.push_back(arr2[i]);
        }
        return ans;
    }
};