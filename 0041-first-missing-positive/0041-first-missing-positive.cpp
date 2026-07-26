class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ch = 1;
        for(int x: arr){
            if(x == ch)ch++;
        }
        return ch;
    }
};