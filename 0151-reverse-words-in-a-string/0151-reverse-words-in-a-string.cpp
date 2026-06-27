class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       string word ,ans;
       vector<string>arr;
       while(ss>>word){
        arr.push_back(word);
       }
       for(int i=arr.size()-1; i>=0;i--){
        ans+=arr[i] + (i?" ":"");
       }
       return ans;
    }
};