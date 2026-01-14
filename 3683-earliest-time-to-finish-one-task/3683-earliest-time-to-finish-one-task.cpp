class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        vector<int>arr;
        int sum=0;
        for(int i=0;i<tasks.size();i++){
            sum=tasks[i][0]+tasks[i][1];
            arr.push_back(sum);
        }
        sort(arr.begin(),arr.end());
        return arr[0];
    }
};