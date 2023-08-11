import java.util.* ;
import java.io.*; 
public class Solution {
    static boolean solve(int idx,int k,int dp[][],int arr[]){
        if(k == 0) return true;
        if(idx == 0) return arr[idx] == k;
        if(dp[idx][k] != -1)return dp[idx][k] == 0 ? false : true;
        boolean notTaken = solve(idx - 1,k,dp,arr);
        boolean taken = false;
        if(arr[idx] <= k) taken = solve(idx - 1,k - arr[idx],dp,arr);
        dp[idx][k] = taken || notTaken ? 1 : 0;
        return taken || notTaken;
    }
    public static boolean subsetSumToK(int n, int k, int arr[]){
        int dp[][] = new int[n][k+1];
        for(int row[] : dp)Arrays.fill(row, -1);
        return solve(n-1,k,dp,arr);
    }
}
