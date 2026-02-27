class Solution {
public:
    int numIdenticalPairs(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j])ans++;
            }
        }
        return ans;
    }
};