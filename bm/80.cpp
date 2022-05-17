//
// Created by mayue on 2022/5/16.
//
#include "common.h"

class Solution {
public:
    /**
     *
     * @param prices int整型vector
     * @return int整型
     */
    int maxProfit(vector<int> &prices) {
        // write code here
        int n = prices.size();
        if(n<=1){
            return  0;
        }

        int min = prices[0];
        int r = 0;
        for (int i = 0; i < n; i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
            int d = prices[i] - min;
            if (d > r) {
                r = d;
            }
        }
        return r;
    }
};