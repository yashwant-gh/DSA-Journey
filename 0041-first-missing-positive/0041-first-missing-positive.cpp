class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        int ans=1;
        sort(arr.begin(),arr.end());
        bool mila=false;
        for(int i=1;i<=arr.back();i++){
            if(mp[i]==0) {
                ans=i;
                mila=true;
                break;
            }
        }
        if(!mila && arr.back()>=0) return arr.back()+1;
        if(!mila) return 1;
        return ans;
    }
};