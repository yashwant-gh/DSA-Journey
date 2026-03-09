class Solution {
public:
    vector<int> createTargetArray(vector<int>& arr, vector<int>& index) {
        cout<<arr.size();
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ans.insert(ans.begin()+index[i],arr[i]);
        }
        return ans;
    }
};