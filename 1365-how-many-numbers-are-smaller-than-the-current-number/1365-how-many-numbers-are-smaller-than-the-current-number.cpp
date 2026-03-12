class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr){
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int count=0;
            for(int j=0;j<arr.size();j++){
                if(i!=j && arr[j]<arr[i])count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};