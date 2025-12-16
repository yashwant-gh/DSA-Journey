class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& arr) {
        unordered_map<double,int>mp;
        for(vector<int> x:arr){
            mp[(double)x[0]/x[1]]++;
        }
        long long count=0;
        long long fr=0;
        for(vector<int> x:arr){
            fr=mp[(double)x[0]/x[1]];
            //formula for no. of pairs: n*(n-1)/2
            count+=fr*(fr-1)/2;
            mp[(double)x[0]/x[1]]=0;
        }
        return count;
    }
};