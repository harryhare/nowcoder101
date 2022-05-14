//
// Created by mayue on 2022/5/11.
//
#include "common.h"

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param str1 string字符串
     * @param str2 string字符串
     * @return int整型
     */
    int editDistance(string str1, string str2) {
        // write code here
        int m = str1.size();
        int n = str2.size();
        vector<vector<int>> dp = vector<vector<int>>(m + 1, vector<int>(n + 1, 0));
        for(int j=0;j<n;j++){
            dp[0][j+1]=j+1;
        }
        for(int i=0;i<m;i++){
            dp[i+1][0]=i+1;
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int t = min(dp[i + 1][j], dp[i][j + 1]) + 1;
                t = min(t, dp[i][j]+(str1[i]!=str2[j]));
                dp[i + 1][j + 1] = t;
            }
        }
        return dp[m][n];
    }
};

int main() {
    Solution s;
    cout << s.editDistance("nowcoder", "new") << endl;
    return 0;
}
