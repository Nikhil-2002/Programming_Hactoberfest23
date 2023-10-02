import java.util.*;

public class Solution {
    public int longestPalindromeSubseq(String s) {
        int[][] dp = new int[s.length() + 1][s.length() + 1];
        Arrays.fill(dp[0], 0);
        for (int i = 1; i <= s.length(); i++) {
            dp[i][0] = 0;
            for (int j = 1; j <= s.length(); j++) {
                if (s.charAt(i - 1) == s.charAt(s.length() - j)) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
                }
            }
        }
        return dp[s.length()][s.length()];
    }

    public static void main(String[] args) {
        Solution solver = new Solution();
        System.out.println(solver.longestPalindromeSubseq("bbbab"));
    }
}