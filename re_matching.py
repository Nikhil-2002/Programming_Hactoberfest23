class Solution(object):
    def isMatch(self, s, p):
            # Create a 2D DP array to store matching results
    # dp[i][j] will represent whether the first i characters in s match the first j characters in p
        dp = [[False] * (len(p) + 1) for _ in range(len(s) + 1)]

    # Base case: both empty strings match
        dp[0][0] = True

    # Handle patterns with '*' at the beginning
        for j in range(1, len(p) + 1):
            if p[j - 1] == '*':
                dp[0][j] = dp[0][j - 2]

    # Fill in the DP table
        for i in range(1, len(s) + 1):
            for j in range(1, len(p) + 1):
            # If the current characters match or the pattern has a '.'
                if s[i - 1] == p[j - 1] or p[j - 1] == '.':
                    dp[i][j] = dp[i - 1][j - 1]
            # If the pattern has a '*'
                elif p[j - 1] == '*':
                # Check zero occurrences or one or more occurrences of the preceding character
                    dp[i][j] = dp[i][j - 2] or (dp[i - 1][j] and (s[i - 1] == p[j - 2] or p[j - 2] == '.'))

    # The result is in the bottom-right cell of the DP table
        return dp[len(s)][len(p)]