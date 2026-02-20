class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int sm=INT_MAX;
        int i=0;
        int ans=-1;
        for(vector<int>arr:points){
            if(arr[0]==x || arr[1]==y){
                if(sm>abs(x-arr[0])+abs(y-arr[1])){
                    sm=abs(x-arr[0])+abs(y-arr[1]);
                    ans=i;
                }
            }
            i++;
        }
        return ans;
    }
};