// Java program to sepeate Even and Odd Numbers
import java.util.Scanner;
public class SeperateEvenOdd{
    public static void main(String[] args){
        int array[] = new int[30];
        int even_array[] = new int[30];
        int odd_array[] = new int[30];
        Scanner sc = new Scanner(System.in);
        int even_count = 0, odd_count = 0;
        int n = 0;
        System.out.println("Enter number of element you wanted to insert:   ");
        n = sc.nextInt();
        
        System.out.println("Enter each element one by one:  ");
        for (int i=0;i<n ;i++ ) {
            array[i] = sc.nextInt();
        }
        
        for(int i=0; i<n; i++){
            if(array[i]%2 == 0){
                even_array[even_count] = array[i];
                even_count++;
            }
            else{
                odd_array[odd_count] = array[i];
                odd_count++;
            }
        }
        System.out.print("Even Elements: ");
        for(int i=0; i<even_count; i++){
            System.out.print(even_array[i]+" ");
        }
        System.out.println("");
        System.out.print("Odd Elements: ");
        for(int i=0; i<odd_count; i++){
            System.out.print(odd_array[i]+" ");
        }
    }
}