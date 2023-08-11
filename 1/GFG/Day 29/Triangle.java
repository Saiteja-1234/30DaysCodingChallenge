class Solution {
    public int minPath(int i,int j,int n,int dp[][],List<List<Integer>> triangle){
        if(dp[i][j] != -1)return dp[i][j];
        if(i == n - 1)return triangle.get(i).get(j);

        int down = triangle.get(i).get(j) + minPath(i + 1,j,n,dp,triangle);
        int dig = triangle.get(i).get(j) + minPath(i + 1,j  + 1,n,dp,triangle);
        return dp[i][j] = Math.min(down,dig);

    }
    public int minimumTotal(List<List<Integer>> triangle) {
        int n = triangle.size();
        int dp[][] = new int[n][n];
        for(int row[] : dp)Arrays.fill(row, - 1);
        return minPath(0,0,n,dp,triangle);
    }
}