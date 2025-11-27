class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string wd;
        for(int i=s.size()-1;i>=0;i--){
             if(s[i]!=' '){
                wd.push_back(s[i]);
                cout<<wd<<" ";
                if(i==0){
                    reverse(wd.begin(),wd.end());
                    ans.append(wd);
                    wd.clear();
                }
            }
            else{
                reverse(wd.begin(),wd.end());
                ans.append(wd);
                wd.clear();
                if((!ans.empty() && ans.back()==' ') || (i==0) ){
                    continue;
                }
                else ans.push_back(' ');
                    
            }
        }
        if(ans.back()==' ')ans.pop_back();
        if(ans.front()==' ')ans.erase(0,1);
        return ans;
    }
};