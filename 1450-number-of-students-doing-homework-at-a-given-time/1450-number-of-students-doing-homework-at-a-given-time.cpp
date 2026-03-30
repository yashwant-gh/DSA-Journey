class Solution {
public:
    int busyStudent(vector<int>& st, vector<int>& et, int qt) {
        int ans=0;
        for(int i=0;i<st.size();i++){
            if(qt>=st[i] && qt<=et[i])ans++;
        }
        return ans;
    }
};