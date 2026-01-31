class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
    int l=0;
    int r=0;
    int sum=arr[0];
    int ans=arr.size();
    bool mila=false;
    while(r<arr.size()){
        if(sum<target){
            r++;
            if(r<arr.size())sum+=arr[r];
        }
        else{
            ans=min(ans,r-l+1);
            mila=true;
            sum-=arr[l];
            l++;
        }
    }
    if(!mila)return 0;
    return ans;
    }
};