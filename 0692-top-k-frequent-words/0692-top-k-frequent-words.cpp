class Solution {
public:
    vector<string> topKFrequent(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(string s:arr){
            mp[s]++;
        }

        //copy map key and value pair in vector
        vector<pair<string,int>>sortval(mp.begin(),mp.end());

        //sort vector based on value
        sort(sortval.begin(),sortval.end(),[](auto &a, auto &b){
            if (a.second!=b.second) return a.second>b.second;  //sort value in decreasing order
            return a.first<b.first;  //sort key as per lexicographical order
        });

        vector<string>ans;
        for(pair<string,int>pr:sortval){
            if(k>0){
                ans.push_back(pr.first);
            }
            k--;
        }
        return ans;
    }
};