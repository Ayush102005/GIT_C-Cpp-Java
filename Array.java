public class Array {
    public static int findLargest(int[] arr) {
        if (arr.length == 0) {
            System.out.println("Array is empty");
            return -1; // Return an error value
        }

        int maxVal = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }

        return maxVal;
    }

    public static void main(String[] args) {
        int[] arr = { 3, 1, 4, 1, 5, 9, 2 };
        int largest = findLargest(arr);
        System.out.println("Largest element: " + largest);
    }
}
