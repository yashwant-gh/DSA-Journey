class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int k = 0;
        for(int x:arr){
            if(k<2 || x!= arr[k-2]){
                arr[k++]=x;
            }
        }
        return k;
    }
};