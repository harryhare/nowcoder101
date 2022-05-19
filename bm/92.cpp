//
// Created by mayue on 2022/5/20.
//
#include "common.h"

class Solution {
public:
    /**
     *
     * @param arr int整型vector the array
     * @return int整型
     */
    int maxLength(vector<int> &arr) {
        // write code here
        int n = arr.size();
        int i = 0;
        int j = 0;
        int m = 0;
        unordered_map<int, int> counter;
        for (; j < n; j++) {
            int t = arr[j];
            counter[t]++;
            if (counter[t]==1) {
                continue;
            }
            m = max(m, j - i);
            for (; i < j; i++) {
                counter[arr[i]]--;
                if (arr[i] == t) {
                    i++;
                    break;
                }
            }
        }
        m = max(m, j - i);
        return m;
    }
};


int main() {
    vector<int> a = {2, 3, 4, 5};
    Solution s;
    cout << s.maxLength(a) << endl;
    return 0;
}