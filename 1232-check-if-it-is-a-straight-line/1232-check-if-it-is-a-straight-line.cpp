class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& arr) {
    int n = arr.size();
    if (n <= 2) return true;
    int dx = arr[1][0] - arr[0][0];
    int dy = arr[1][1] - arr[0][1];
    for (int i = 2; i < n; i++) {
        int curr_dx = arr[i][0] - arr[0][0];
        int curr_dy = arr[i][1] - arr[0][1];
        if (dy * curr_dx != curr_dy * dx) return false;
    }
    return true;
    }
};