class Solution {
public:
int bsl(vector<int> arr,int target){
    int l=0;
    int h=arr.size()-1;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
            ans=mid;
            h=mid-1;
        }
        else if(arr[mid]>target)h=mid-1;
        else l=mid+1;
    }
    return ans;
}

int bsr(vector<int>arr,int target){
    int l=0;
    int h=arr.size()-1;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
            ans=mid;
            l=mid+1;
        }
        else if(arr[mid]>target)h=mid-1;
        else l=mid+1;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int>ans;
        int fr=bsl(arr,target);
        int ls=bsr(arr,target);
        ans.push_back(fr);
        ans.push_back(ls);
        return ans;
    }
};