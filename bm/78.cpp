//
// Created by mayue on 2022/5/15.
//
# include "common.h"

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param nums int整型vector
     * @return int整型
     */
    int rob(vector<int> &nums) {
        // write code here
        int n = nums.size();
        if(n<=0){
            return 0;
        }
        if(n==1){
            return nums[0];
        }
        auto dp = vector<int>(n+1, 0);
        dp[1]=nums[0];
        dp[2]=nums[1];
        for(int i=2;i<n;i++){
            dp[i+1]=nums[i]+max(dp[i-1],dp[i-2]);
        }
        return max(dp[n],dp[n-1]);
    }
};

int main() {
    Solution s;

    return 0;
}