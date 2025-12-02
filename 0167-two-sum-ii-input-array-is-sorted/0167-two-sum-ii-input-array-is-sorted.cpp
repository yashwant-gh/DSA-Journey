class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
    //     vector<int>ans;
    //     for(int i=0;i<arr.size()-1;i++){ //n time 
    //         int need=target-arr[i];
    //         //applying binary search for log n search time
    //         int left=i+1;
    //         int right=arr.size()-1;
    //         while(left<=right){
    //             int mid=left+(right-left)/2;
    //             if(arr[mid]==need) ans={i+1,mid+1};
    //             if(arr[mid]<need) left=mid+1;
    //             else right=mid-1;
    //         }
            
    //     }
    //     return ans;
    vector<int>ans;
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        if(arr[left]+arr[right]<target)left++;
        else if (arr[left]+arr[right]>target)right--;
        else {
            ans={left+1,right+1};
            return ans;
        }
    }
    return ans;
    }
};