class Solution {
public:
int rev(int n){
    string s=to_string(n);
    int ans=0;
    int dig;
    int i=s.size()-1;
    while(n){
        dig=n%10;
        ans+=dig*pow(10,i);
        n/=10;
        i--;
    }
    return ans;
}
    int countNicePairs(vector<int>& arr) {
        const long long MOD = 1000000007;
        int count=0;
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x-rev(x)]++;
        }
        long long  fr;
        for(int x:arr){
            fr=mp[x-rev(x)];
            count+=fr*(fr-1)/2;
            mp[x-rev(x)]=0;
        }
        return count%MOD;
    }
};