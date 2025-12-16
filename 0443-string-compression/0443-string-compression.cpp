class Solution {
public:

vector<char> num(vector<char>ans,int count){
    string s=to_string(count);
    for(char c:s){
        ans.push_back(c);
    }
    return ans;
}
    int compress(vector<char>& arr) {
        if(arr.size()==1) return 1;
        vector<char>ans;
        int count=0;
        for(int i=0;i<arr.size();i++){
            count=1;
            int j=i+1;
            while(j<arr.size() && arr[j]==arr[i]){
                count++;
                j++;
            }
            ans.push_back(arr[i]);
            if(count==1) continue;
            if(count<10) ans.push_back('0'+count);
            else ans=num(ans,count);  
            i=j-1;
        }
        arr=ans;
        return ans.size();
    }
};