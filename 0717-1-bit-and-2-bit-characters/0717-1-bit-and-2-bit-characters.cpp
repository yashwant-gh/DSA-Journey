class Solution {
public:
    bool isOneBitCharacter(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(arr.size()==1 ){
                if(arr[i]==1) return false;
                if(arr[i]==0) return true;
            }
            if(arr[i]==1){
                arr.erase(arr.begin()+i,arr.begin()+i+2);
                i--;
                // for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
                // cout<<endl;
                continue;
            }
            if(arr[i]==0){
                arr.erase(arr.begin()+i);
                i--;
            }
        }
        // for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
        //         cout<<endl;
        return false;
    }
};