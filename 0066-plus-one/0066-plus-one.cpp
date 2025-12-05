class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        if(arr[arr.size()-1]!=9){
            arr[arr.size()-1]++;
            return arr;
        }
        bool carry=true;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]==9 && carry){
                arr[i]=0;
            }
            else {
                if(carry){
                    arr[i]++;
                    carry=false;
                }
            }
        }
        if(carry) arr.insert(arr.begin()+0,1);
        return arr;
    }
};