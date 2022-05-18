//
// Created by mayue on 2022/5/17.
//
#include "common.h"
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算成功举办活动需要多少名主持人
     * @param n int整型 有n个活动
     * @param startEnd int整型vector<vector<>> startEnd[i][0]用于表示第i个活动的开始时间，startEnd[i][1]表示第i个活动的结束时间
     * @return int整型
     */
    int minmumNumberOfHost(int n, vector<vector<int> >& startEnd) {
        // write code here
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[startEnd[i][0]]++;
            m[startEnd[i][1]]--;
        }
        int c=0;
        int host=0;
        for(const auto &it:m){
            cout<<it.first<<":"<<it.second<<endl;
            c+=it.second;
            host=max(c,host);
        }
        return host;
    }
};