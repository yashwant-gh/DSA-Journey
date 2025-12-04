class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int coun=count(arr.begin(),arr.end(),0);
        auto it= remove(arr.begin(),arr.end(),0);
        arr.erase(it,arr.end());
        for(int i=0;i<coun;i++) arr.push_back(0);
    }
};