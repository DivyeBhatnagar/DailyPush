import java.util.Scanner;

public class Loops {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a number: ");
        int n = scanner.nextInt();
        
        int sum = 0;
        System.out.println("\nNumbers from 1 to " + n + ":");
        for (int i = 1; i <= n; i++) {
            System.out.print(i + " ");
            sum += i;
        }
        
        System.out.println("\nSum = " + sum);
        
        scanner.close();
    }
}
