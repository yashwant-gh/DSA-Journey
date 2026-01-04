class Solution {
public:
    int sumFourDivisors(vector<int>& arr) {
        int dv=0;
        int sumdv=0;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            dv=0;
            sumdv=0;
            for(int j=1;j<=arr[i];j++){
                if(arr[i]%j==0){
                    dv++;
                    sumdv+=j;
                }
                if(dv>4) break;
            }
            if(dv==4)ans+=sumdv;
        }
        return ans;
    }
};