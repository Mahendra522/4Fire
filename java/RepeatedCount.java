//Java Program to find the repeated element and its count.
import java.util.Scanner;
public class RepeatedCount{
    public static void main(String[] args){
        int n=0, repeated_count = 0,k=0;
        int array[] = new int[30];
        int repeated_array[] = new int[30];
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of elements you wanted to insert:  ");
        n = sc.nextInt();
        System.out.println();
        
        System.out.println("Enter each element on by one:   ");
        for(int i=0; i<n;i++){
            array[i] = sc.nextInt();
        }
        
        for(int i=0; i<n-1; i++){
            int count = 1;
            if(array[i] == 0) break;
            for(int j=i+1; j<n; j++){
                if(array[i] == array[j]){
                    count++;
                    array[j] = 0;
                }       
            }
            System.out.println(array[i]+" is repeated "+count+" times.");
        }
    }
}