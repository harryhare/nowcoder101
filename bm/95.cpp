//
// Created by mayue on 2022/5/17.
//
#include "common.h"

class Solution {
public:
    /**
     * pick candy
     * @param arr int整型vector the array
     * @return int整型
     */
    int candy(vector<int> &arr) {
        // write code here
        int n = arr.size();
        if (n < 1) {
            return 0;
        }
        vector<int> left = vector<int>(n, 1);
        vector<int> right = vector<int>(n, 1);
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                left[i] = left[i - 1] + 1;
            }
        }
        for (int i = n-2; i >=0; i--) {
            if (arr[i] > arr[i + 1]) {
                right[i] = right[i + 1] + 1;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=max(left[i],right[i]);
        }
        return sum;
    }
};