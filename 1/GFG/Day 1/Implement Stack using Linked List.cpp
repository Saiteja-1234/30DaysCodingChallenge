void MyStack ::push(int x) 
{
    StackNode *nn = new StackNode(x);
    if(!top) top = nn;
    else{
    nn->next = top;
    top = nn;}
}


int MyStack ::pop() 
{
    if(!top) return -1;
    int val = top -> data;
    StackNode *tmp = top;
    free(tmp);
    top = top ->next;
    return val;
}