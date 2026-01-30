class Solution {
public:
bool ispossible(vector<int>arr,int n,int hour){
    long long sum=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<n)sum++;
        else{
            sum+=(arr[i]/n);
            if(arr[i]%n)sum++;
        }
    }
    if(sum<=hour)return true;
    return false;
}
    int minEatingSpeed(vector<int>& arr, int hour) {
        int l=1;
        int h=*max_element(arr.begin(),arr.end());
        int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(ispossible(arr,mid,hour)){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};