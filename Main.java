// JAVA Program to display unique pattern of numbers and letters
public class Main {
    public static void main(String[] args) {

        int n = 5;

        for (int i = 1; i <= n; i++) {

            // Print numbers
            for (int j = 1; j <= i; j++) {
                System.out.print(i + " ");
            }

            // Print letters
            char ch = (char) ('A' + i - 1);

            for (int j = i; j <= n; j++) {
                System.out.print(ch + " ");
            }

            System.out.println();
        }
    }
}