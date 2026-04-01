class Solution {
public:
    int missingMultiple(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int x:arr)mp[x]++;
        int ch=k;
        while(mp[ch])ch+=k;
        return ch;
    }
};