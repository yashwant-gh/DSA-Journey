class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int cntz=0;
        int pr=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)cntz++;
            else pr *= arr[i];
        }

        if(cntz>1){
            vector<int>ans(arr.size());
            return ans;
        }
        vector<int>ans(arr.size());
        for(int i=0;i<arr.size();i++){
            if(cntz){
                if(arr[i]==0)ans[i]=pr;
                else ans[i]=0;
            }
            else ans[i]=pr/arr[i];
        }
        return ans;
    }
};