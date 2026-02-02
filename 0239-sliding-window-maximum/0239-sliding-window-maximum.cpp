class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    vector<int> ans;
    int n = arr.size();
    if (k == 1) return arr;

    int mx = INT_MIN, index = -1;
    int l = 0;

    for (int r = 0; r < n; r++) {
        if (arr[r] >= mx) {
            mx = arr[r];
            index = r;
        }

        if (r - l + 1 == k) {
            if (index < l) {
                mx = arr[l];
                index = l;
                for (int i = l + 1; i <= r; i++) {
                    if (arr[i] > mx) {
                        mx = arr[i];
                        index = i;
                    }
                }
            }
            ans.push_back(mx);
            l++;
        }
    }
    return ans;
}
};