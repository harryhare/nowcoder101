//
// Created by mayue on 2022/5/18.
//
#include "common.h"
class Solution {
public:
    /**
     * 旋转数组
     * @param n int整型 数组长度
     * @param m int整型 右移距离
     * @param a int整型vector 给定数组
     * @return int整型vector
     */
    vector<int> solve(int n, int m, vector<int>& a) {
        // write code here
        m=m%n;
        reverse(a.begin(),a.end());
        reverse(a.begin(),a.begin()+m);
        reverse(a.begin()+m,a.end());
        return a;
    }
};
