class Solution {
public:
bool ischar(string s, char x){
    if(s.find(x)!=string::npos)return true;
    return false;
}
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            if(ischar(words[i],x))ans.push_back(i);
        }
        return ans;
    }
};