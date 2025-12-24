class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=accumulate(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end(),greater<int>());
        int count=0;
        for(int x:capacity){
            if(sum==0 || sum<0){
                break;
            }
            sum-=x;
            count++;
        }
        return count;
    }
};