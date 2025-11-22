class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
       
        int i=0,j=arr.size()-1,k=arr.size()-1;
         vector<int>res(arr.size());
        while(i<=j){
            if(abs(arr[i])>abs(arr[j])){
                res[k]=arr[i]*arr[i];
                i++;
            }
            else{
                res[k]= arr[j]*arr[j];
                j--;
            }
            k--;
        }
        return res;
    }
};