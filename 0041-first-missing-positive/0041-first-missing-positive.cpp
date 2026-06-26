class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr)mp[x]++;
        for(int i=1;i<=arr.size();i++){
            if(!mp[i])return i;
        }
        return arr.size()+1;
    }
};