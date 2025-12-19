class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& arr, int k) {
        vector<int>ch;
        for(int i=0;i<arr.size();i++){
            ch.push_back(arr[i][k]);
        }
        sort(ch.begin(),ch.end(),greater<int>());
        vector<vector<int>>ans;
        ans.resize(arr.size());
        for(int i=0;i<arr.size();i++){
            auto it=find(ch.begin(),ch.end(),arr[i][k]);
            int index = distance(ch.begin(), it);
            ans[index]=arr[i];
        }
        return ans;
    }
};