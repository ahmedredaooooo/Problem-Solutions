import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long x = in.nextLong();
       /*
       * 1  -1
       * 2  1
       * 3  -2
       * 4  2
       * 5  -3
       * 6  3
       * */
        if (x % 2 != 0) {
            x++;
            x*=-1;
            System.out.println(x/2);
        } else
            System.out.println(x/2);
    }
}