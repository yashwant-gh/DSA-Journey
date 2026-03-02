class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        int ans1 = 0, ans2=0;
        for(int x:arr1)mp1[x]++;
        for(int x:arr2)mp2[x]++;
        for(int x:arr1)if(mp2[x])ans1++;
        for(int x:arr2)if(mp1[x])ans2++;
        vector<int>ans={ans1,ans2};
        return ans;
    }
};