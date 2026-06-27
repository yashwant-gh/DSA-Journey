class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        sort(arr.begin(),arr.end());
        string first=arr[0], last=arr[arr.size()-1];
        int mn = min(arr[0].size(), arr[arr.size()-1].size());
        string ans="";
        for(int i=0;i<mn;i++){
            if(first[i]!=last[i])return ans;
            ans+=first[i];
        }
        return ans;
    }
};