class Solution {
public:
    int singleNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans;
        if(arr.size()==1) return arr[0];
        if(arr[0]!=arr[1]) return arr[0];
        if(arr[arr.size()-1]!=arr[arr.size()-2]) return arr[arr.size()-1];
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]) ans=arr[i];
        }
        return ans;
    }
};