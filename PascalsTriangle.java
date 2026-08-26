// Java Program to print Pascal's Triangle
public class PascalsTriangle {
    public static void main(String[] args) {

        int n = 6;

        for (int i = 0; i < n; i++) {

            // Print spaces
            for (int space = 0; space < n - i - 1; space++) {
                System.out.print(" ");
            }

            long value = 1;

            for (int j = 0; j <= i; j++) {

                System.out.print(value + " ");

                // Calculate next value
                value = value * (i - j) / (j + 1);
            }

            System.out.println();
        }
    }
}