import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        long b = in.nextLong();
        long c = in.nextLong();
        long temp ;
        temp = a;
        a = b;
        b = temp;
        temp = a;
        a = c;
        c = temp;
        System.out.println(a + " " + b + " " + c);
    }
}