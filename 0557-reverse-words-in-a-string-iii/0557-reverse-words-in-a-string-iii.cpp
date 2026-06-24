class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string wd, ans = "";
        vector<string>arr;
        while(ss>>wd){
            reverse(wd.begin(),wd.end());
            arr.push_back(wd);
        }
        for(string word:arr){
            ans+=word+" ";
        }
        ans.pop_back();
        return ans;
    }
};