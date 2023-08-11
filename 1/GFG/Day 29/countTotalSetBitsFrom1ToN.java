public class Solution{
    static int findLargestPower(int n)
    {
        int x = 0;
        while ((1 << x) <= n)
            x++;
        return x - 1;
    }
    public static int countSetBits(int n) {
        // int dp[] = new int[n + 1];
        // dp[0] = 0;
        // if(n > 0)dp[1] = 1;
        // for(int i = 2;i < n + 1;i++){
        //     dp[i] = 1 + dp[i & (i - 1)];
        // }
        // int res = 0;
        // for(int el : dp)res += el;
        // return res;

        if (n <= 1)
            return n;
        int x = findLargestPower(n);
        return (x * (int)Math.pow(2, (x - 1)))
            + (n - (int)Math.pow(2, x) + 1)
            + countSetBits(n - (int)Math.pow(2, x));

    }
}