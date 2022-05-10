//
// Created by mayue on 2022/5/7.
//
// 和 62 差不多
class Solution {
public:
    int Fibonacci(int n) {
        return int((pow((1 + sqrt(5)) / 2, n+1) - pow((1 - sqrt(5)) / 2, n+1)) / sqrt(5));
    }
}
int main(){

    return  0;
}

