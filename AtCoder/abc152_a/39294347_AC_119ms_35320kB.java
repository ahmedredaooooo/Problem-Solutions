import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long x = in.nextLong();
        long y = in.nextLong();
        if (y<x)
            System.out.println("No");
        else
            System.out.println("Yes");
    }
}