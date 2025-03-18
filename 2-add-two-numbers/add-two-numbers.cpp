/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* dummy = new ListNode(0);  // A dummy node to simplify the result list handling
    ListNode* current = dummy;          // Pointer to build the result list
    int carry = 0;                      // Store carry from the addition of two digits
    
    // Traverse both linked lists
    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int sum = carry;  // Start with the carry from the previous step
        
        // If l1 is not null, add its value
        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;  // Move to the next node in l1
        }
        
        // If l2 is not null, add its value
        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;  // Move to the next node in l2
        }
        
        // Update carry for the next step
        carry = sum / 10;
        
        // Create a new node with the digit (sum % 10) and move to the next node
        current->next = new ListNode(sum % 10);
        current = current->next;
    }
    
    return dummy->next;  // 
    }
};