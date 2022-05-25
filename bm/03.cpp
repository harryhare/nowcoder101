//
// Created by mayue on 2022/5/22.
//

#include "common.h"

struct ListNode {
    int val;
    struct ListNode *next;
};

class Solution {
public:
    /**
     *
     * @param head ListNode类
     * @param k int整型
     * @return ListNode类
     */
    ListNode *reverseKGroup(ListNode *head, int k) {
        ListNode *tail = head;
        for (int i = 0; i < k; i++, tail = tail->next) {
            if (tail == NULL) {
                return head;
            }
        }
        ListNode *new_tail = reverseKGroup(tail, k);
        ListNode *h = new_tail;
        ListNode *p = head;
        for (int i = 0; i < k; i++) {
            ListNode *t = p->next;
            p->next = h;
            h = p;
            p = t;
        }
        return h;
    }
};