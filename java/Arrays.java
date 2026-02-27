import java.util.Scanner;

public class Arrays {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        
        int[] arr = new int[n];
        int sum = 0;
        
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
            sum += arr[i];
        }
        
        System.out.print("\nArray elements: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        
        System.out.println("\nSum = " + sum);
        System.out.println("Average = " + (float)sum / n);
        
        scanner.close();
    }
}
