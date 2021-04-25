// Java Program to print elements in Reverse order.
import java.util.Scanner;
public class PrintInReverse{
    public static void main(String[] args){
        int array[];
        array = new int[30];
        Scanner sc = new Scanner(System.in);
        int n = 0;
        System.out.print("Enter Number of elements you wanted to insert:  ");
        n = sc.nextInt();
        
        System.out.println("Enter each element one by one:  ");
        for(int i=0; i<n; i++){
            array[i] = sc.nextInt();
        }
        System.out.println();
        
        System.out.println("Printing Elements of Array in reverse order:    ");
        for(int i = n-1; i>=0; i--){
            System.out.println(array[i]);
        }
        
    }
}