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
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* new_head=NULL;
        while(pHead!=NULL){
            auto next=pHead->next;
            pHead->next=new_head;
            new_head=pHead;
            pHead=next;
        }
        return new_head;
    }
};
