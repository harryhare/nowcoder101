//
// Created by mayue on 2022/5/16.
//
#include "common.h"

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 计算最大收益
     * @param prices int整型vector 股票每一天的价格
     * @return int整型
     */
    int maxProfit(vector<int> &prices) {
        // write code here
        int n = prices.size();
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            if (prices[i] < prices[i + 1]) {
                sum += (prices[i+1] - prices[i]);
            }
        }
        return sum;
    }
};

int main() {

    return 0;
}