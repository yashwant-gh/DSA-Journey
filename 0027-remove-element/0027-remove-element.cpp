class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        // sort(arr.begin(),arr.end());
        int count=0;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            if(arr[i]==val) {
                arr.erase(arr.begin()+i);
                count++;
                i--;
            }
        }
        return n-count;
    }
};