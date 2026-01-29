class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int currsum=0;
        int count=0;
        for(int i=0;i<arr.size();i++){
            currsum+=arr[i];
            if(mp.find(currsum-k)!=mp.end()){
                count+=mp[currsum-k];
            }
            mp[currsum]++;
        }
        return count;
    }
};