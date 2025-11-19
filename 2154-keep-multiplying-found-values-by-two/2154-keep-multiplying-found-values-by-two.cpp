class Solution {
public:
    int findFinalValue(vector<int>& arr, int org) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]==org) org=org*2;
        }
        return org;
    }
};