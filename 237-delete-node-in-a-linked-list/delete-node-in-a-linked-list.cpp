/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

       ListNode * prev=NULL;                          // first make a node name prev
       while(node!=NULL && node->next!=NULL){         // check if node is null or the next of the node is null
        node->val=node->next->val;                    // then put the valuse of the next node to the current node
        prev=node;                                    // now point the prev node to the current node
        node=node->next;
       }
       prev->next=NULL;                               //once we get the condition executed then make prev next val to be null
       delete(node);                                  // now delete the node
        
    }
};