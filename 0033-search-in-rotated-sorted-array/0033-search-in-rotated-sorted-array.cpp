class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l=0;
        int h=arr.size()-1;
        int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==target){
                return ans=mid;
            }
            if(arr[mid]<arr[h]){
                if(arr[mid]<target && target<=arr[h]){
                    l=mid+1;
                }
                else h=mid-1;
            }
            else{
                if(arr[mid]>target && target>=arr[l]){
                    h=mid-1;
                }
                else l=mid+1;
            }
        }
        return ans;
    }
};