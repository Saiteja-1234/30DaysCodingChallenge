class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *fst = head,*slow = head;
        while(fst and fst->next){
            fst = fst->next->next;
            slow = slow->next;
            if(fst == slow){
                break;
            }
        }
        if (slow == fst) {
            slow = head;
            if (slow == fst)
                while (fst->next != slow)
                    fst = fst->next;
            else {
                while (slow->next != fst->next) {
                    slow = slow->next;
                    fst = fst->next;
                }
            }
            fst->next = NULL;
        }
    }
};