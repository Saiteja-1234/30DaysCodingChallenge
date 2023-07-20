int secondLargest(vector<int>&a,int n){
    int l = a[0],sl = -1;
    for(auto i : a){
        if(i > l){
            sl = l;l = i;
        }
        else if(i < l and i > sl){
            sl = i;
        }
    }
    return sl;
}


int secondSmallest(vector<int>&a,int n){
    int s = a[0],ss = INT_MAX;
    for(auto i : a){
        if(i < s){
            ss = s;s = i;
        }
        else if(i > s and i < ss){
            ss = i;
        }
    }
    return ss;
}



vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int sl = secondLargest(a,n);
    int ss = secondSmallest(a,n);
    return {sl,ss};
}
