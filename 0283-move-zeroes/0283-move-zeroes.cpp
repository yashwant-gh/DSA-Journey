class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        vector<int>ans;
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0) ans.push_back(arr[i]);
            if(arr[i]==0) count++;
        }
        for(int i=0;i<count;i++){
            ans.push_back(0);
        }
        arr=ans;

    }
};