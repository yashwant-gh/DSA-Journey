class Solution {
public:
    int maxArea(vector<int>& arr) {
        int mx=INT_MIN;
        int l=0;
        int r=arr.size()-1;
        while(l<r){
            int area=min(arr[l],arr[r])*(r-l);
            mx=max(area,mx);
            if(arr[l]<arr[r])l++;
            else r--;
        }
        return mx;
    }
};