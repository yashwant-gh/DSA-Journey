class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>&image, int original, int color){
        int n = image.size();
        int m =image[0].size();
        if(r<0 || r>n-1 ||c<0||c>m-1 || image[r][c]!=original)return;
        image[r][c] = color;
        dfs(r-1,c,image,original,color);
        dfs(r+1,c,image,original,color);
        dfs(r,c-1,image,original,color);
        dfs(r,c+1,image,original,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original  = image[sr][sc];
        if(original == color)return image;
        dfs(sr,sc,image,original,color);
        return image;
    }
};