//
// Created by mayue on 2022/5/11.
//

# include "common.h"
class Solution {
public:
    /**
     *
     * @param matrix int整型vector<vector<>> the matrix
     * @return int整型
     */
    int minPathSum(vector<vector<int> >& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp=vector<vector<int>>(m+1,vector<int>(n+1,INT32_MAX));
        dp[1][0]=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i+1][j+1]=min(dp[i][j+1],dp[i+1][j])+matrix[i][j];
            }
        }
        cout<<dp[m][n]<<endl;
        return dp[m][n];
    }
};
int main(){
    printf("%d\n",INFINITY);
    Solution s;
    vector<vector<int>>c={{1,2,3},{1,2,3}};
    assert(s.minPathSum(c)==7);
//    vector<vector<int>>a={{1,3,5,9},{8,1,3,4},{5,0,6,1},{8,8,4,0}};
//    assert(s.minPathSum(a)==12);
    vector<vector<int>>b={{3,3,1,6,7,6,0,7,8,0},{5,0,5,0,5,3,9,8,0,4},{2,8,8,9,0,6,8,7,6,7},{6,1,0,9,0,9,6,0,6,6},{2,3,6,9,5,3,2,4,3,4},{1,5,2,1,4,5,8,4,2,6},{3,0,0,5,0,0,4,6,2,2},{4,6,6,2,5,1,7,9,8,0},{3,1,7,7,2,4,2,0,8,6},{9,4,7,9,9,7,1,4,5,5}};
    assert(s.minPathSum(b)==46);
    return 0;
}