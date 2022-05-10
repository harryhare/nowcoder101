//
// Created by mayue on 2022/5/7.
//
#include "common.h"

class Solution {
public:
    int Fibonacci(int n) {
        return int((pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5));
    }
//    int Fibonacci(int n) {
//        if(n==1||n==2){
//            return 1;
//        }
//        int a=1;
//        int b=1;
//        int c=0;
//        for(int i=3;i<=n;i++){
//            c=a+b;
//            a=b;
//            b=c;
//        }
//        return c;
//    }
};

int main(){
    Solution s;
    assert(s.Fibonacci(1)==1);
    assert(s.Fibonacci(2)==1);
    assert(s.Fibonacci(3)==2);
    assert(s.Fibonacci(4)==3);
}
