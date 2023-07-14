int modularNode(Node* head, int k)
{
	int mx = -1, cnt = 0;
    Node * tmp  = head;
    while(tmp){
        cnt++;tmp = tmp->next;
    }
    
    if(cnt < k) return -1;
    cnt = (cnt % k) ? cnt - (cnt%k): cnt;
    cnt --;
    while(cnt){
        head = head ->next;cnt--;
    }
    if(head) mx = head->data;
    return mx;
}
