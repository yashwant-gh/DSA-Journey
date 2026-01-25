class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& arr1, vector<string>& arr2) {
        string s1="";
        string s2="";
        for(string s:arr1)s1.append(s);
        for(string s:arr2)s2.append(s);
        if(s1==s2)return true;
        return false;
    }
};