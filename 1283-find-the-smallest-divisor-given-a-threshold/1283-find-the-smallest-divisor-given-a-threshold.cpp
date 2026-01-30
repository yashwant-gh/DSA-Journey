class Solution {
public:
    int smallestDivisor(vector<int>& arr, int threshold) {
        int l=1;
        int h=*max_element(arr.begin(),arr.end());
        while(l<h){
            int mid=l+(h-l)/2;
            int sum=0;
            for(int n:arr)sum+=(n+mid-1)/mid;
            if(sum>threshold)l=mid+1;
            else h=mid;
        }
        return l;
    }
};