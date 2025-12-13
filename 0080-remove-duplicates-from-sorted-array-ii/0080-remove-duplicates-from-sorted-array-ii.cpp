class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        unordered_map<int,int>mp;
        set<int>st;
        int count=0;
        for(int x:arr){
            mp[x]++;
            if(mp[x]>2) mp[x]=2;
            st.insert(x);
        }
        int i=0;
        for(int x: st){
            count+=mp[x];
            while(mp[x]){
                arr[i]=x;
                mp[x]--;
                i++;
            }
        }

        return count;

    }
};