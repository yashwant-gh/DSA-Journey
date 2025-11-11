class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int red=0;
        int wh=0;
        int bl=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) red++;
            else if (arr[i]==1) wh++;
            else bl++; 
        }

        arr.clear();
        while(red) {
            arr.push_back(0);
            red--;
            }
        while(wh) {
            arr.push_back(1);
            wh--;
        }
        while(bl) {
            arr.push_back(2);
            bl--;
        }
    }
};