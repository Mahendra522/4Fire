// Java program to reverse all the elements of the arrays.
import java.util.Scanner;
public class ReverseArrayElements{
    public static void main(String[] args){
        int array[] = new int[30];
        Scanner sc = new Scanner(System.in);
        int n = 0;
        int mid = 0;
        System.out.print("Enter number of element you wanted to insert:   ");
        n  = sc.nextInt();
        
        mid = n / 2;
        
        System.out.println();
        
        System.out.println("Enter each element one by one:  ");
        for (int i=0;i<n ;i++ ) {
            array[i] = sc.nextInt();
        }
        System.out.println("Reversing all the elements of the array:    ");
        
        for(int i=0;i<mid;i++){
            int temp = 0;
            temp = array[i];
            array[i] = array[n-i-1];
            array[n-i-1] = temp;
        }
        
        for(int i=0; i<n; i++){
            System.out.print(array[i]+" ");
        }
        
        
    }
}