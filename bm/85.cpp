//
// Created by mayue on 2022/5/19.
//
#include "common.h"
static regex ipv4("(([12]?[0-9]?[0-9])\\.){3}[12]?[0-9]?[0-9]");
static regex ipv6("(([12]?[0-9]?[0-9])\\.){3}[12]?[0-9]?[0-9]");
class Solution {
public:

    /**
     * 验证IP地址
     * @param IP string字符串 一个IP地址字符串
     * @return string字符串
     */
    string solve(string IP) {

        // write code here
    }
};

int main(){
    string p1="1.1.1.1";
    cout<<regex_match(p1.begin(),p1.end(),ipv4)<<endl;
    return 0;
}