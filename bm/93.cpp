//
// Created by mayue on 2022/5/20.
//

#include "common.h"

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param height int整型vector
     * @return int整型
     */
    int maxArea(vector<int> &height) {
        // write code here
        int n = height.size();
        if(n<2){
            return 0;
        }
        int i = 0;
        int j = n - 1;
        int m=min(height[i],height[j])*(j-i);
        while (i < j) {
            if(height[i]<height[j]){
                int k=i;
                for(;i<j && height[i]<=height[k];i++);
                int area=min(height[i],height[j])*(j-i);
                m=max(m,area);
            } else{
                int k=j;
                for(;i<j && height[j]<=height[k];j--);
                int area=min(height[i],height[j])*(j-i);
                m=max(m,area);
            }
        }
        return m;
    }
};


