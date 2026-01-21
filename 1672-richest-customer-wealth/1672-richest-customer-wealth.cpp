class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int maxu=INT_MIN;
        int sum=0;
        for(vector<int> aru:arr){
            sum=accumulate(aru.begin(),aru.end(),0);
            maxu=max(maxu,sum);
        }
        return maxu;
    }
};