class Solution {
public:
    int singleNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans;
        if(arr.size()==1) return arr[0];
        if(arr[0]!=arr[1]) return arr[0];
        if(arr[arr.size()-1]!=arr[arr.size()-2]) return arr[arr.size()-1];
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]) ans=arr[i];
        }
        // int ans;
        // for(int i=0;i<arr.size();i++){
        //     int sum=0;
        //     for(int j=0;j<arr.size();j++){
        //         if(arr[i]==arr[j] && i!=j)sum++;
        //     }
        //     if(sum==0) ans=arr[i];
        // }
        return ans;
    }
};