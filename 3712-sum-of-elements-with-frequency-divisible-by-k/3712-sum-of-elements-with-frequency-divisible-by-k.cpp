class Solution {
public:
    int sumDivisibleByK(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int &x: arr)mp[x]++;
        int sum=0;
        for(int &x: arr)if(mp[x]%k==0)sum+=x;
        return sum;
        }
};