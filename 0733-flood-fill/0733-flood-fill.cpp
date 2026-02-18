class Solution {
public:

bool isvalid(vector<vector<int>>& arr,int r, int c,int val,int color, int m, int n){
    if(r<0 || c<0 || c>=n || r>=m || arr[r][c]==color || arr[r][c]!=val) return false;
    return true;
}
    vector<vector<int>> floodFill(vector<vector<int>>& arr, int sr, int sc, int color) {
        int m=arr.size();
        int n=arr[0].size();
        queue<pair<int,int>>q;
        int val=arr[sr][sc];
        arr[sr][sc]=color;
        q.push({sr,sc});
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            if(isvalid(arr,r-1,c,val,color,m,n)){
                arr[r-1][c]=color;
                q.push({r-1,c});
            }
            if(isvalid(arr,r+1,c,val,color,m,n)){
                arr[r+1][c]=color;
                q.push({r+1,c});
            }
            if(isvalid(arr,r,c-1,val,color,m,n)){
                arr[r][c-1]=color;
                q.push({r,c-1});
            }
            if(isvalid(arr,r,c+1,val,color,m,n)){
                arr[r][c+1]=color;
                q.push({r,c+1});
            }
        }
        return arr;
    }
};