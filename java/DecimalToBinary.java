// Decimal to Binary conversion program written in Java Programming Language
import java.util.Scanner;
public class DecimalToBinary{
    public static void main(String[] args){
        int decimal = 0, temp = 0, i = 0;
        int binary_array[] = new int[30];
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the decimal Number:   ");
        decimal = sc.nextInt();
        
        temp = decimal;
        
        while(temp!=0){
            if (temp % 2 == 0){
                binary_array[i] = 0;
                i++;
                temp = temp / 2;
            } 
            else{
                binary_array[i] = 1;
                i++;
                temp = temp / 2;
            }
        }
        System.out.print("Binary Number:    ");
        for (int j=i-1;j>=0 ;j-- ) {
            System.out.print(binary_array[j]+" ");
        }
    }
}