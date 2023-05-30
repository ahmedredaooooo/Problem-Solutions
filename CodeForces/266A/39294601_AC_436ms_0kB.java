import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        String st = in.next();
        long j = 0L;
        for (int i = 0; i < n - 1; i++)
            if (st.charAt(i)-st.charAt(i+1)==0)
                j++;
        System.out.println(j);

    }
}