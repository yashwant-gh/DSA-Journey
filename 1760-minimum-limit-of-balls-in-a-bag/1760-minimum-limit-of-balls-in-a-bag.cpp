class Solution {
public:
bool ispossible(vector<int>arr,int n,int op){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>n){
            sum+=(arr[i]-1)/n;
            if(sum>op)return false;
        }
    }
    return true;
}
    int minimumSize(vector<int>& arr, int mo) {
    int l=1;
    int h=*max_element(arr.begin(),arr.end());
    if(mo==0)return h;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(ispossible(arr,mid,mo)){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;
    }
    return ans;
    }
};