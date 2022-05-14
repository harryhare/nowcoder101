//
// Created by mayue on 2022/5/11.
//
#include "common.h"

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param str string字符串
     * @param pattern string字符串
     * @return bool布尔型
     */

    bool match(string str, string pattern) {
        // write code here
        int m = pattern.size();
        int n = str.size();
        if (m == 0) {
            return n == 0;
        }
        // 不用dp 而用dfs 因为 使用dp 的话，很多中间结点用不到
        if (m >= 2 && pattern[1] == '*') {
            if (pattern[0] == '.') {
                for (int i = 0; i <= n; i++) {
                    if (match(str.substr(i, n - i), pattern.substr(2, m - 2))) {
                        return true;
                    }
                }
                return false;
            } else {
                for (int i = 0; i <= n; i++) {
                    if (match(str.substr(i, n - i), pattern.substr(2, m - 2))) {
                        return true;
                    }
                    if (i!=n&&str[i] != pattern[0]) {
                        break;
                    }
                }
                return false;
            }
        } else {
            if(n==0){
                return false;
            }
            if (pattern[0] == '.' || (pattern[0] == str[0])) {
                return match(str.substr(1, n - 1), pattern.substr(1, m - 1));
            } else {
                return false;
            }
        }

    }
};

int main() {
    string x = "12345";
    cout << x.substr(1, 2) << endl;
    cout << x.substr(5, 0) << endl;
    Solution s;
    cout<<s.match("a","a.")<<endl;
//    cout<<s.match("a","a*")<<endl;
//    cout << s.match("aaa", "a*a") << endl;
//    cout<<s.match("aad","c*a*d")<<endl;
//    cout<<s.match("a",".*")<<endl;
//    cout << s.match("aaab", "a*a*a*c") << endl;
    return 0;
}
