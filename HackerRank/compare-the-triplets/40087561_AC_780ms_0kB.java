
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;

public class Solution {



    public static void main(String[] args) throws IOException {
       Scanner scan = new Scanner(System.in);
        int[] a = new int[3];
        int[] b = new int[3];
    
        int a0 = scan.nextInt();
        a[0]=a0;
        int a1 = scan.nextInt();
        a[1]=a1;
        int a2 = scan.nextInt();
        a[2]=a2;
        int b0 = scan.nextInt();
        b[0]=b0;
        int b1 = scan.nextInt();
        b[1]=b1;
        int b2 = scan.nextInt();
        b[2] = b2;
        
        int alice=0,bob=0;
        for (int i=0;i<3;i++)
        {
        if (a[i]>b[i])
        {
                alice++;
        }
        else if(b[i]>a[i])
        {
            bob++;
        }
    }
    System.out.println(alice+" "+bob);
}
}