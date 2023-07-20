// Given two sorted arrays, 'A' and 'B', of size 'N' and 'M', respectively,
//      return the union of the arrays.
// The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.

// Note: 'A' and 'B' may contain duplicate elements but the union array must contain unique elements


// Input: 'N' = 5 M² = 3 'A' = [1, 2, 3, 4, 6]
// 'B' = [2, 3, 5]
// Output: [1, 2, 3, 4, 5, 6]






vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1 = a.size();
    int n2 = b.size(); 
    int i = 0,j  = 0;
    vector<int>un;
    while(i < n1 and j < n2){
        if(a[i] <= b[j]){
            if(un.empty() or un.back() != a[i]){
                un.emplace_back(a[i]);
            }
            i++;
        }
        else{
            if(un.empty() or un.back() != b[j]){
                un.emplace_back(b[j]);
            }
            j++;
        }
    }
    while(i < n1){
        if(un.empty() or un.back() != a[i]){
                un.emplace_back(a[i]);
        }
        i++;
    }
    while(j < n2){
        if(un.empty() or un.back() != b[j]){
                un.emplace_back(b[j]);
        }
        j++;
    }
    return un;
}