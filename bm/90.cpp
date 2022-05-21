//
// Created by mayue on 2022/5/19.
//

#include "common.h"
class Solution {
public:
    /**
     *
     * @param S string字符串
     * @param T string字符串
     * @return string字符串
     */
    string minWindow(string S, string T) {
        // write code here
        int should_counter[256]={0};
        int counter[256]={0};
        for(char t:T){
            should_counter[t]++;
        }
        int c=0;
        int i=0;
        for(;c<T.size()&&i<S.size();i++){
            if(counter[S[i]]++){
                if (counter[S[i]]<=should_counter[S[i]]){
                    c++;
                }
            }
        }
        int j=i;
        i=0;
        int m=j-i;
    }
};