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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        ListNode *head=NULL;
        ListNode **next_pointer=&head;
        while(pHead1!=NULL && pHead2!=NULL){
            if(pHead1->val<=pHead2->val){
                *next_pointer=pHead1;
                next_pointer=&(pHead1->next);
                pHead1=pHead1->next;
            } else{
                *next_pointer=pHead2;
                next_pointer=&(pHead2->next);
                pHead2=pHead2->next;
            }
        }
        *next_pointer=NULL;
        if(pHead1!=NULL){
            *next_pointer=pHead1;
        }
        if(pHead2!=NULL){
            *next_pointer=pHead2;
        }
        return head;
    }
};



