//
// Created by mayue on 2022/5/15.
//

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
        auto dp2 = vector<int>(n+1,0);
        dp[1]=nums[0];
        dp2[1]=1;
        dp[2]=nums[1];
        dp2[2]=0;

        for(int i=2;i<n;i++){
            dp[i+1]=nums[i]+max(dp[i-1],dp[i-2]);
            if(dp[i-1]==dp[i-2]){
                dp2[i + 1] =  (dp2[i - 1] & dp2[i - 2]);
            }else {
                dp2[i + 1] = dp[i - 1] > dp[i - 2] ? dp2[i - 1] : dp2[i - 2];
            }
        }
        return max(dp[n]-nums[0]*dp2[n],dp[n-1]);
    }
};

int main() {
    Solution s;
    //vector<int> a={1,2,3,4};
    vector<int> a={69,27,25,44,1,16,76,98,22,52};
    cout<<s.rob(a)<<endl;
    return 0;
}