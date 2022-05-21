//
// Created by mayue on 2022/5/20.
//
#include "common.h"

struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {
    }
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p1 = head;
        ListNode *p2 = head;
        while(p2!=NULL){
            if(p2->next==NULL){
                return false;
            }
            p1=p1->next;
            p2=p2->next;
            p2=p2->next;
            if(p1==p2){
                return true;
            }
        }
        return false;

    }
};
