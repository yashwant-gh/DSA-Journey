class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        set<int>st;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
            if(mp[x]>arr.size()/3) st.insert(x);
        }
        for(int x:st){
            ans.push_back(x);
        }
        return ans;
    }
};