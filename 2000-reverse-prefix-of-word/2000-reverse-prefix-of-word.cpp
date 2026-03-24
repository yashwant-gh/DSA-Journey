class Solution {
public:
    string reversePrefix(string s, char ch) {
        auto in = s.find(ch);
        int index =  (in == string::npos) ? -1 : static_cast<int>(in);
        if(index==-1)return s;
        else reverse(s.begin(), s.begin()+index+1);
        return s;
    }
};