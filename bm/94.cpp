//
// Created by mayue on 2022/5/19.
//
#include "common.h"


class Solution {
public:
    /**
     * max water
     * @param arr int整型vector the array
     * @return long长整型
     */
    long long maxWater(vector<int>& arr) {
        // write code here
        int i=0;
        int j=arr.size()-1;
        long long ans=0;
        int leftMax=arr[i];
        int rightMax=arr[j];
        //
        while(i<=j){
            if(leftMax<rightMax){
                ans+=leftMax-arr[i];
                i++;
                leftMax=std::max(leftMax,arr[i]);
            }else{
                //这里leftMax>=rightMax,否则循环可能出不去
                ans+=rightMax-arr[j];
                j--;
                rightMax=std::max(rightMax,arr[j]);
            }
        }

        return ans;
    }
};
//
//class Solution {
//public:
//    /**
//     * max water
//     * @param arr int整型vector the array
//     * @return long长整型
//     */
//    long long maxWater(vector<int> &arr) {
//        // write code here
//        int n = arr.size();
//        if (n == 0) {
//            return 0;
//        }
//        int left = arr[0];
//        int left_i = 0;
//        int sum = 0;
//        int total = 0;
//        for (int i = 1; i < n; i++) {
//            if (arr[i] >= left) {
//                int water = left * (i - left_i - 1) - sum;
//                total += water;
//                left_i = i;
//                left = arr[i];
//                sum=0;
//                continue;
//            }
//            sum += arr[i];
//        }
//        sum = 0;
//        int right_i = n - 1;
//        int right = arr[n - 1];
//        for (int i = n - 2; i >= 0; i--) {
//            if (arr[i] > right) {
//                int water = right * (right_i - i - 1) - sum;
//                total += water;
//                right_i = i;
//                right = arr[i];
//                sum=0;
//                continue;
//            }
//            sum += arr[i];
//        }
//        return total;
//    }
//
//};


int main() {
    Solution s;
    vector<int> a = {5, 5, 1, 7, 1, 1, 5, 2, 7, 6};
    cout << s.maxWater(a) << endl;
    return 1;
}


