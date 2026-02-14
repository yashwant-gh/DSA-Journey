class Solution {
public:
    int minOperations(vector<int>& arr) {
        if(arr.size()==1)return 0;
        int count=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<=arr[i-1]){
                count+=arr[i-1]-arr[i]+1;
                arr[i]=arr[i-1]+1;
            }
        }
        return count;
    }
};