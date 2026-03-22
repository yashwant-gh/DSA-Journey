class Solution {
public:
    int numJewelsInStones(string j, string stones) {
        int ans=0;
        for(char c:stones){
            if(j.contains(c))ans++;
        }
        return ans;
    }
};