//
// Created by mayue on 2022/5/7.
//
#include "common.h"

/*
 *  更简单的方法dp 数组里面放字符串
 *
 */
class Solution {
public:
    /**
     * longest common subsequence
     * @param s1 string字符串 the string
     * @param s2 string字符串 the string
     * @return string字符串
     */

    // 对称dp
    string LCS(string s1, string s2) {
        // write code here
        int m = s1.size();
        int n = s2.size();
        // m*n
        vector<vector<int>> dp;
        for (int i = 0; i < m + 1; i++) {
            dp.push_back(vector<int>(n + 1, 0));
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int t = max(dp[i][j + 1], dp[i + 1][j]);
                if (s1[i] == s2[j]) {
                    t = max(t, dp[i][j] + 1);
                }
                dp[i + 1][j + 1] = t;
            }
        }
        int len = dp[m][n];
        if (len == 0) {
            return "-1";
        }
        string s(len, '\0');
        int i = m - 1;
        int j = n - 1;
        while (len > 0) {
            if (dp[i + 1][j + 1] == dp[i][j + 1]) {
                i--;
            } else if (dp[i + 1][j + 1] == dp[i + 1][j]) {
                j--;
            } else {
                len--;
                s[len] = s1[i];
                i--;
                j--;
            }
        }
        cout << s << endl;
        return s;
    }
};

int main() {
    Solution s;
    assert(s.LCS("1a1a31", "1a231") == "1a31");
    assert(s.LCS("1A2C3D4B56", "B1D23A456A") == "123456");
    assert(s.LCS("abc", "def") == "-1");
    assert(s.LCS("abc", "abc") == "abc");
    assert(s.LCS("ab", "") == "-1");
//    string s(10, '\0');
//    for(int i=0;i<10;i++){
//        s[i]='0'+i;
//    }
//    cout<<s<<endl;
    return 0;
}

