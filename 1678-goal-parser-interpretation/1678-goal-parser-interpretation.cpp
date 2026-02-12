class Solution {
public:
    string interpret(string s) {
        string ans="";
        int i=0;
        while(i<s.size()){
            if(s[i]=='G')ans.push_back('G');
            else if (s[i]=='('){
                if(s[i+1]==')')ans.push_back('o');
                else if (s[i+1]=='a')ans.append("al");
            }
            i++;
        }
        return ans;
    }
};