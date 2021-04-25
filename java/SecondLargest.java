// Java Program to find the second largest element in an array
import java.util.Scanner;
public class Main{
    public static void SecondLargest(String[] args){
        int n=0;
        int array[] = new int[30];
        Scanner sc = new Scanner(System.in);
        int max1 = 0, max2 = 0;
        System.out.print("Enter number of elements you wanted to insert:    ");
        n = sc.nextInt();
        System.out.println();
        
        System.out.println("Enter each element one by one:");
        for (int i=0; i<n ; i++) {
            array[i] = sc.nextInt();
        }
        
        max1 = array[0];
        max2 = array[1];
        
        if(max2>max1){
            max1 = max1 + max2;
            max2 = max1- max2;
            max1 = max1 - max2;
        }
        for(int i=2; i<n; i++){
            if(array[i] > max2){
                int temp = 0;
                temp = array[i];
                array[i] = max2;
                max2 = temp;
                if(max2>max1){
                    max1 = max1 + max2;
                    max2 = max1- max2;
                    max1 = max1 - max2;
                }
            }
        }
        System.out.println("Second largest element is: "+max2);
    }
}
