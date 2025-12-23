class Solution {
public:
    vector<int> getConcatenation(vector<int>& arr) {
        vector<int>ans;
        ans=arr;
        ans.insert(ans.begin(),arr.begin(),arr.end());
        return ans;
        
    }
};