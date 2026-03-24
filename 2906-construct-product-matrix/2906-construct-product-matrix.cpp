class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int k=0;
        vector<long long> a(m*n);
        vector<long long> prefix(m*n,1);
        vector<long long> suffix(m*n,1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[k]=grid[i][j];
                k++;
            }

        }
        for(int i=1;i<m*n;i++)
            prefix[i]=(prefix[i-1]*a[i-1])%12345;
        for(int i=m*n-2;i>=0;i--)
            suffix[i]=(suffix[i+1]*a[i+1])%12345;
        vector<vector<int>> result(m,vector<int>(n));
        
        k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                result[i][j]=(prefix[k]*suffix[k])%12345;
                k++;
            }
        }
        
        return result;

    }
};