//
// Created by mayue on 2022/5/17.
//

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 两次交易所能获得的最大收益
     * @param prices int整型vector 股票每一天的价格
     * @return int整型
     */
    int maxProfit(vector<int> &prices) {
        // write code here
        int n = prices.size();
        if (n <= 1) {
            return 0;
        }


        int buy1 = -prices[0];
        int buy2 = -prices[0];
        int sell1 = 0;
        int sell2 = 0;
        for (auto p:prices) {
            buy1 = max(buy1, -p);
            buy2 = max(buy2, sell1 - p);

            sell1 = max(sell1, buy1 + p);
            sell2 = max(sell2, buy2 + p);
        }
        return sell2;
    }
};