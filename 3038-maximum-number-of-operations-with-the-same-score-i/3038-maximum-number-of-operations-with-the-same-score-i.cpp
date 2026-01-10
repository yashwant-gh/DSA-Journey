class Solution {
public:
    int maxOperations(vector<int>& arr) {
        int score=arr[0]+arr[1];
        int sum=0;
        int i=0;
        while(i<arr.size()-1){
            if(arr[i]+arr[i+1]==score)sum++;
            else break;
            i+=2;
        }
        return sum;
    }
};