class Solution {
public:
    bool kLengthApart(vector<int>& arr, int k) {
        int sum=0;
        for(int i=0;i<arr.size()-1;i++){
            sum=0;
            if(arr[i]==0) continue;
            for(int j=i+1;j<arr.size();j++){
                if((sum<k)&& arr[j]==1) return false;
                sum++;
            }
        }
        return true;
    }
};