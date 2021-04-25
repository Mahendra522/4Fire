// Java Program to find the second smallest element in the Array
import java.util.Scanner;
public class SecondSmallest{
    public static void main(String[] args){
        int n=0, min1=0, min2=0;
        int array[] = new int[30];
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of element you wanted to insert:     ");
        n = sc.nextInt();
        
        System.out.print("Enter each element one by one:\n");
        for(int i=0; i<n; i++){
            array[i] = sc.nextInt();
        }
        min1 = array[0];
        min2 = array[1];
        
        if(min2 < min1){
            min1 = min1 + min2;
            min2 = min1 - min2;
            min1 = min1 - min2;
        }
        for(int i=2; i<n; i++){
            int temp =0;
            if(array[i]<min2){
                temp = min2;
                min2 = array[i];
                array[i] = temp;
                if(min2<min1){
                    min1 = min1 + min2;
                    min2 = min1 - min2;
                    min1 = min1 - min2;
                }
            }
        }
        System.out.println("The second smallest element in the array is: "+min2);
    }
}