class Solution {
public:
    int calPoints(vector<string>& arr) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]=="+")ans.push_back(ans[ans.size()-1]+ans[ans.size()-2]);
            else if(arr[i]=="D")ans.push_back((ans[ans.size()-1])*2);
            else if(arr[i]=="C")ans.pop_back();
            else ans.push_back(stoi(arr[i]));
        }
        int sum=accumulate(ans.begin(),ans.end(),0);
        return sum;
    }
};