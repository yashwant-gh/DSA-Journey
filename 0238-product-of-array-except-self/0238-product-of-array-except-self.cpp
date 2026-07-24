class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        vector<int>pre(arr.size());
        vector<int>suf(arr.size());
        pre[0] = suf[suf.size()-1]=1;
        for(int i=1;i<arr.size();i++)pre[i] = pre[i-1] * arr[i-1];
        for(int i=arr.size()-2;i>=0;i--)suf[i] = suf[i+1] * arr[i+1];
        for(int i=0;i<arr.size();i++)arr[i] = pre[i]*suf[i];
        return arr;
    }
};