class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        // int right=0;
        int left=arr.size()-1;
        int ans;
        for(int right=0;right<arr.size();right++){
            left=arr.size()-1;
        while(right<left){
            if(arr[right]==arr[left]) ans=arr[right];
            left--;
        }
        }
        return ans;
    }
};