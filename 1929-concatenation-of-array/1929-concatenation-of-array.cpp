class Solution {
public:
    vector<int> getConcatenation(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            arr.push_back(arr[i]);
        }
        return arr;
        
    }
};