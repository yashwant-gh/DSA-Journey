class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        int fvpr=(5*n)/100;
        sort(arr.begin(),arr.end());
        arr.erase(arr.begin(),arr.begin()+fvpr);
        arr.erase(arr.end()-fvpr,arr.end());
        double sum=accumulate(arr.begin(),arr.end(),0.0);
        double ans=sum/arr.size();
        return ans;
    }
};