class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        if(target<arr[0])return 0;
        if(target>arr[arr.size()-1])return arr.size();
        int l=0;
        int h=arr.size()-1;
        int ans=h+1;
        while(l<=h){
            int mid=l+(h-l)/2;
            
            if(arr[mid]>target && arr[mid-1]<target || arr[mid]==target){
                return ans=mid;
            }
            else if(arr[mid]<target)l=mid+1;
            else h=mid-1;
        }
        return ans;
    }
};