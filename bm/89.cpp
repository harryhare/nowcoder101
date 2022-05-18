//
// Created by mayue on 2022/5/19.
//

/**
 * Definition for an interval.

 */


#include "common.h"

struct Interval {
    int start;
    int end;

    Interval() : start(0), end(0) {}

    Interval(int s, int e) : start(s), end(e) {}
};

bool cmp(const Interval &i1, const Interval &i2) {
    if (i1.start == i2.start) {
        return i1.end > i2.end;
    }
    return i1.start < i2.start;
}


class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        vector<Interval> r;
        sort(intervals.begin(), intervals.end(), cmp);
        if(intervals.size()==0){
            return r;
        }
        Interval t=intervals[0];
        for(const auto &interval: intervals){
            if(interval.end<=t.end){
                continue;
            }
            if(interval.start<=t.end){
                t.end=interval.end;
                continue;
            }
            r.push_back(t);
            t=interval;
        }
        r.push_back(t);
        return r;
    }
};