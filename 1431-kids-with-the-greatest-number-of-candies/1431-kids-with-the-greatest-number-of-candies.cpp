class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ex) {
        vector<bool>arr;
        int mx=INT_MIN;
        for(int x:candies) {
            if(x>mx)mx=x;
        }
        for(int x:candies){
            if(x+ex >=mx)arr.push_back(true);
            else arr.push_back(false);
        }
        return arr;
    }
};