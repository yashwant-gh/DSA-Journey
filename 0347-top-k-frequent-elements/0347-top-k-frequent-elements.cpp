class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        vector<pair<int,int>> sortval(mp.begin(), mp.end()); 
        sort(sortval.begin(), sortval.end(), [](auto &a, auto &b){ 
            return a.second > b.second;   
        });

        vector<int>ans;
        for(pair<int,int>pr:sortval){
            if(k){
            ans.push_back(pr.first);
            k--;
            }
        }








        // for(pair<int,int>pr:mp){
        //     fr.push_back(pr.second);
        // }
        // sort(fr.begin(),fr.end(),greater<int>());
        // vector<int>ans;
        // int zm=k;
        // for(int i=0;i<k;i++){
        //     for(pair<int,int>pr:mp ){
        //         if(fr[i]==pr.second && zm){
        //             ans.push_back(pr.first);
        //             zm--;
        //         }
        //         }
        // }
        return ans;
    }
};