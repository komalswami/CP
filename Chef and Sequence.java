import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt(), k = scanner.nextInt(), change = 0;
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
                if (arr[i] > 1) {
                    change++;
                }
            }
            if (change <= k) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
