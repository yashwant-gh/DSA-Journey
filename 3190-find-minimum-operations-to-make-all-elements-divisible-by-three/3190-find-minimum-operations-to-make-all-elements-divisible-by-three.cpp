class Solution {
public:
    int minimumOperations(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%3==0) continue;
            else  sum++;
        }
        return sum;
    }
};