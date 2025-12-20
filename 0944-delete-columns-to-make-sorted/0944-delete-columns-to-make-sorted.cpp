class Solution {
public:
    int minDeletionSize(vector<string>& arr) {
        int count=0;
        for(int j=0;j<arr[0].size();j++){
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i][j]>arr[i+1][j]){
                count++;
                break;
            }
        }
        }
        return count;
    }
};