class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        for(int i=0;i<arr2.size();i++){
            arr1.push_back(arr2[i]);
        }
        sort(arr1.begin(),arr1.end());
        if((arr1.size()%2)==0){
            return double(arr1[((arr1.size())/2)-1]+(arr1[((arr1.size())/2)]))/2;
        }
        else return arr1[(arr1.size())/2];
    }
};