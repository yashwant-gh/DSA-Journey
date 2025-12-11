class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        //copy map keys and values in vector
        vector<pair<char,int>> sortval(mp.begin(), mp.end()); 
        //sort vector based on value
        sort(sortval.begin(), sortval.end(), [](auto &a, auto &b){ 
            return a.second > b.second;   //sort in decreasing order
        });
        string ans;
        for(pair<char,int>pr:sortval){
            while(pr.second){
                ans.push_back(pr.first);
                pr.second--;
            }
        }
        return ans;
    }
};