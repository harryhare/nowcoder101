//
// Created by mayue on 2022/5/22.
//

/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

struct ListNode {
    int val;
    struct ListNode *next;
};

class Solution {
public:
    /**
     *
     * @param head ListNode类
     * @param m int整型
     * @param n int整型
     * @return ListNode类
     */
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        if (m == n) {
            return head;
        }

        ListNode **start = &head; // 逆转头
        ListNode *p = head;
        for (int i = 1; i < m; i++) {
            start = &(p->next);
            p = p->next;
        }
        ListNode **end = &(p->next);// 逆转尾，剩下的元素的地址
        ListNode *rhead = p;
        for (int i = 0; i <= n - m; i++) {
            ListNode *next = p->next;
            p->next = rhead;
            rhead = p;
            p = next;
        }
        // 头和尾最后组装
        *start = rhead;
        *end = p;
        return head;
    }
};