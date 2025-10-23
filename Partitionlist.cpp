 */
#include <queue>
using namespace std;

class Solution {
public:
   ListNode* partition(ListNode* head, int x) 
{
    ListNode * temp1 = head;
    ListNode * temp = new ListNode(-1);
    ListNode* dummyNode = temp;
    queue<int> q;

    while(temp1 != NULL)
    {
        if(temp1->val >= x)
        {
            q.push(temp1->val);
        }
        else {
            dummyNode->next = new ListNode(temp1->val);
            dummyNode = dummyNode->next;   
        }
        temp1 = temp1->next;
    }

    while(!q.empty())                      
    {
        dummyNode->next =new ListNode(q.front());
        q.pop();
        dummyNode = dummyNode->next;
    }

    return temp->next;
}

};
