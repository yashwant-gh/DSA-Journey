class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(vector<int>&arr:image){
            reverse(arr.begin(),arr.end());
            for(int &x:arr){
                if(x==0)x=1;
                else x=0;
            }
        }
        return image;
    }
};