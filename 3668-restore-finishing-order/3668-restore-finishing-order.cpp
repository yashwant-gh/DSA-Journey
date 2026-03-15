class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans;
        for(int x:order){
            if(binary_search(friends.begin(),friends.end(),x))ans.push_back(x);
        }
        return ans;
    }
};