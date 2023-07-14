class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node *n = new Node(x);
       if(!head) head = n;
       else{
           n->next = head;
           head = n;
       }
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node *nn = new Node(x),*temp = head;
       if(!head) head = nn;
       else{
       while(temp->next)temp = temp->next;
       temp->next = nn;}
       return head;
    }
};