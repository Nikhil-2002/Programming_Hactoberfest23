import java.util.*;

class Main
{
    // Function to check if n is palindrome
    static boolean isPalindrome(int n)
    {
          // Find the appropriate divisor
          // to extract the leading digit
          int divisor = 1;
          while (n / divisor >= 10)
             divisor *= 10;

          while (n != 0) {
             int x = n / divisor;
             int y = n % 10;

             // If first and last digits are
             // not same then return false
             if (x != y)
               return false;

             // Removing the leading and trailing
             // digits from the number
             n = (n % divisor) / 10;

             // Reducing divisor by a factor
             // of 2 as 2 digits are dropped
            divisor = divisor / 100;
         }
         return true;
    }

    // Function to find the largest palindromic number
    static int largestPalindrome(int []A, int n)
    {
         int res = -1;

         for (int i = 0; i < n; i++) { // If a palindrome larger than the currentMax is found 
                 if (A[i] > res && isPalindrome(A[i]))
                     res = A[i];
         }

        // Return the largest palindromic number from the array
        return res;
     }

    // Driver program
    public static void main(String []args)
    {
       int []A = { 121, 2322, 54545, 999990 };
       int n = A.length;

      // print required answer
      System.out.println(largestPalindrome(A, n));
    }

}