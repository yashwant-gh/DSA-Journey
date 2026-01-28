class Solution {
public:
int bs(vector<int>arr){
    
    if(arr[0]>arr[1])return 0;
    if(arr[arr.size()-1]>arr[arr.size()-2])return arr.size()-1;
    int l=1;
    int h=arr.size()-2;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        else if (arr[mid]>arr[mid-1])l=mid+1;
        else h=mid-1;
    }
    return -1;
}
    int findPeakElement(vector<int>& arr) {
        if(arr.size()==1)return 0;
        int ans=bs(arr);
        return ans;
    }
};