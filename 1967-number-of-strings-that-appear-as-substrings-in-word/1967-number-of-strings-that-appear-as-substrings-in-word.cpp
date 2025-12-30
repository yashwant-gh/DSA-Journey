class Solution {
public:
    int numOfStrings(vector<string>& arr, string word) {
        int sum=0;
        for(string s:arr)if(word.contains(s))sum++;
        return sum;

    }
};