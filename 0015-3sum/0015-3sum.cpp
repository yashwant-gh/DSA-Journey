class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(i>0 && arr[i]==arr[i-1])continue;
            int l = i+1;
            int r = arr.size()-1;
            while(l<r){
                if(arr[l] + arr[r] == -arr[i]){
                    ans.push_back({arr[i], arr[l], arr[r]});
                    while(l<r && arr[l]==arr[l+1])l++;
                    while(l<r && arr[r]==arr[r-1])r--;
                    l++;
                    r--;
                }
                else if(arr[l] + arr[r] < -arr[i])l++;
                else r--;
            }
        }
        return ans;
    }
};