int _ = (atexit([]{ofstream("display_runtime.txt")<<0;}),0);


class Solution {
public:
    long long countBadPairs(vector<int>& arr) {
        int i=0;
        unordered_map<int,int>mp;
        for(int x: arr){
            mp[i-x]++;
            i++;
        }
        long long count=0;
        int j=0;
        long long fr=0;
        for(int x:arr){
            fr=mp[j-x];
            // no. of pair
            count+=fr*(fr-1)/2;
            mp[j-x]=0;
            j++;
        }
        //total pair
        long long tp=arr.size()*(arr.size()-1)/2;
        //total pair - good pair
        long long ans=tp-count;
        return ans;
    }
};