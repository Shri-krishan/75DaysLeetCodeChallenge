class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        long total = 0;
        for(auto row:grid)
            for(int x:row)
                total += x;

        if(total%2!=0) return false;

        long half=total/2;
        long sum=0;
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n;j++)
                sum+=grid[i][j];
            if(sum==half)return true;
        }
        sum=0;
        for(int j=0;j<n-1;j++){
            for(int i=0;i<m;i++)
                sum +=grid[i][j];
            if (sum==half) return true;
        }

        return false;
    }
};