class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int midpos;
        if(sizeOfStack & 1) midpos = (sizeOfStack+1)/2;
        else midpos = (sizeOfStack+1)/2+1;
        // cout<<midpos<<'\n';
        int pos = 1;
        stack<int>tmp;
        while(pos < midpos){
            pos++;
            tmp.push(s.top());
            s.pop();
        }
        // cout<<s.top();
        s.pop();
        while(!tmp.empty()){
            s.push(tmp.top());
            tmp.pop();
        }
    }
};