vector<int> generateRow(int r){
        long long ans  = 1;
        vector<int>ansR;
        ansR.push_back(1);
        for(int col = 1;col < r;col++){
            ans *= (r - col);
            ans /= col;
            ansR.push_back(ans);
        }
        return ansR;
    }
    vector<vector<int>> generate(int rowIndex) {

        vector<vector<int>>dp;
        for(int i = 1; i<= rowIndex;i++){
            dp.push_back(generateRow(i));
        }
        return dp;
    }