class Solution {
public:
    bool search(vector<int>& arr, int target) {
    int l=0;
    int h=arr.size()-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
            return true;
        }
        if(arr[l]==arr[mid] && arr[mid]==arr[h]){
            l++;
            h--;
            continue;
        }
        if(arr[mid]<=arr[h]){
            if(arr[mid]<target && target<=arr[h])l=mid+1;
            else h=mid-1;
        }
        else{
            if(arr[l]<=target && target<arr[mid])h=mid-1;
            else l=mid+1;
        }
    }
    return false;
    }
};