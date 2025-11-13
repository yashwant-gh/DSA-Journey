class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start,end;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                sum=sum+1;
                start=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                end=i;
                break;
            }
        }
        vector<int> result(2);
        if(sum==0){
            result[0]=-1;
            result[1]=-1;
            return result;
        }
        else {
            result[0]=start;
            result[1]=end;
            return result;
        }
    }
};