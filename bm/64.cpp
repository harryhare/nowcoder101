//
// Created by mayue on 2022/5/7.
//
#include "common.h"


class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param cost int整型vector
     * @return int整型
     */
    int minCostClimbingStairs(vector<int>& cost) {
        // write code here
        int a[100000+8];
        a[0]=0;
        a[1]=0;
        for(int i=2;i<=cost.size();i++){
            int cost1=a[i-2]+cost[i-2];
            int cost2=a[i-1]+cost[i-1];
            a[i]=min(cost1,cost2);
        }
        return  a[cost.size()];
    }
};

int minCostClimbingStairs(int* cost, int costLen ) {
    // write code here
    int a[10000+8];
    a[0]=0;
    a[1]=0;
    for(int i=2;i<=costLen;i++){
        int cost1=a[i-2]+cost[i-2];
        int cost2=a[i-1]+cost[i-1];
        a[i]=min(cost1,cost2);
    }
    return  a[costLen];
}

int main(){
    int a[]={2,5,20};
    assert(minCostClimbingStairs(a,3)==5);
    int b[]={1,100,1,1,1,90,1,1,80,1};
    assert(minCostClimbingStairs(b,10)==6);
    return 0;
}

