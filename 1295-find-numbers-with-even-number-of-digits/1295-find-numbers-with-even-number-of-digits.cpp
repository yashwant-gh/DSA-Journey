class Solution {
public:
    int findNumbers(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            int count=0;
            while(arr[i]){
                count++;
                arr[i]=arr[i]/10;
            }
            if(count%2==0)ans++;
        }
        return ans;
    }
};