class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int sum=0;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                string s(arr[j].rbegin(), arr[j].rend());
                if(arr[i]==s){
                    sum++;
                    break;
                }
            }
        }
        return sum;
    }
};