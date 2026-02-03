class Solution {
public:
vector<int> find_row(vector<vector<int>>& matrix, int target){
        int li=0;
        int hi=matrix.size()-1;
        int ans=-1;
        while(li<=hi){
            int mid=li+(hi-li)/2;
            if(matrix[mid][0]<=target){
                ans=mid;
                li=mid+1;
            }
            else hi=mid-1;
        }
        return matrix[ans];
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        vector<int>arr= find_row(matrix,target);
        int l=0;
        int h=arr.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==target)return true;
            else if (arr[mid]>target)h=mid-1;
            else l=mid+1;
        }
        return false;
    }
};