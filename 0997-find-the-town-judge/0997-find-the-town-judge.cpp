class Solution {
public:
    int findJudge(int n, vector<vector<int>>& arr) {
    unordered_map<int,int>mp;
    unordered_map<int,int>mp1;
    int org=n;
    for(vector<int>aru:arr)mp[aru[0]]++;
    for(vector<int>aru:arr)mp1[aru[1]]++;
    while(n>=1){
        if(!mp[n] && mp1[n]==org-1)return n;
        n--;
    }
    return -1;
    }
};