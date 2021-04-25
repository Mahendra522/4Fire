// Java Program to reverse only the first half of the array
import java.util.Scanner;
public class ReverseFirstHalfArray{
    public static void main(String[] args){
        int array[] = new int[30];
        Scanner sc = new Scanner(System.in);
        int n = 0, first_mid = 0, mid = 0;
        System.out.print("Enter number of elements you wanted to enter:   ");
        n = sc.nextInt();
        
        System.out.print("Enter each element one by one:\n");
        for(int i=0; i<n; i++){
            array[i] = sc.nextInt();
        }
        
        mid = n / 2;
        first_mid = n /4;
        System.out.println();
        System.out.print("Reversing first half of array elements:\n");
        for(int i=0;i<first_mid; i++){
            int temp = 0;
            temp = array[i];
            array[i] = array[mid-i-1];
            array[mid-i-1] = temp;
        }
        for(int i=0; i<n; i++){
            System.out.println(array[i]);
        }
        
        
        
    }
}