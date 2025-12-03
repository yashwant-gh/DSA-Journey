class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int ans;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j] && i!=j)sum++;
            }
            if(sum==0) ans=arr[i];
        }
        return ans;
    }
};