class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // sort(arr.begin(),arr.end());
        int l=0;
        int r=arr.size()-1;
        for(int i=0;i<arr.size();i++){   
            for(int j=0;j<arr.size();j++){
                if(j==i) continue;
                if(arr[i]==0){
                    if(arr[j]!=0) continue;
                    if(arr[j]==0) return true;
                }
                if(arr[j]==2*arr[i]) return true;
            }
        }
        return false;
    }
};