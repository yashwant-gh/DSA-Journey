class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
        vector<int>ans;
        sort(arr.begin(),arr.end());
        while(ans.size()!=2){
        if(arr.size()==1) ans.push_back(arr[0]);
        if(arr[0]!=arr[1]) ans.push_back(arr[0]);
        if(arr[arr.size()-1]!=arr[arr.size()-2]) ans.push_back(arr[arr.size()-1]);
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]) ans.push_back(arr[i]);
        }
        }
        return ans;
    }
};