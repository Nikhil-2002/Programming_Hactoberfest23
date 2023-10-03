public class countEvenOdd {
    public static void main(String[] args) {
        // Initialize an array of integers
        int[] arr = { 2, 5, 8, 9, 12, 7, 6 };

        // Initialize counters for even and odd elements
        int evenCount = 0;
        int oddCount = 0;

        // Iterate through the array using an enhanced for loop
        for (int num : arr) {
            // Check if the current element is even
            if (num % 2 == 0) {
                evenCount++;
            } else { // If it's not even, it's odd
                oddCount++;
            }
        }

        // Print the counts of even and odd elements
        System.out.println("Even count: " + evenCount);
        System.out.println("Odd count: " + oddCount);
    }
}
