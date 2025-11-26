class Solution {
public:
    int countPairs(vector<int>& arr, int t) {
        int sum=0;
        for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if( arr[j]+arr[i]<t) sum++;
        }
    }
    return sum;
    }
};