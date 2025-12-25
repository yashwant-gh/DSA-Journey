class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        long long sum=0;
        for(int i=0;i<k;i++){
            if(arr.back()==0) break;
            if((arr.back()-i)>=0) sum+=arr.back()-i;
            cout<<arr.back()-i<<" ";
            arr.pop_back();
        }
        // while(k){
        //     sum+=arr.back();
        //     arr.pop_back();
        //     for(int &x:arr){
        //         if(x>0) x--;
        //     }
        //     k--;
        // }
        return sum;
    }
};