class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int mx=INT_MIN;
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                mx=max(mx,count);
                count=0;
            }
            else count++;
        }
        mx=max(mx,count);
        return mx;
    }
};