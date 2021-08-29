//Java Program to calculate the sum of even digits and odd digits of any given number.

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class DigitSum
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int MAX = 20;
        int number = 14369856;
        int sumOdd = 0;
        int sumEven = 0;
        
        int temp = 0, i = 0;
        temp = number;
        // int digits[MAX] = {0};
        int[] digits = new int[MAX];
        
        while(temp != 0){
            digits[i] = temp%10;
            temp = temp / 10;
            i++;
        }
        
        System.out.print("Digits entered are: ");
        for (int k=0; k<i; k++){
            System.out.print(digits[k]+" ");    
        }
        
        
        System.out.println("\nTotal count of digits: "+i);
        
        for(int k = 0; k<i; k++){
            if(digits[k]%2 == 0){
                sumEven = sumEven + digits[k];
            }
            else{
                sumOdd = sumOdd + digits[k];
            }
        }
        
        System.out.println("Sum of all Odd digits in "+number+" is "+sumOdd);
        System.out.println("Sum of all Even digits in "+number+" is "+sumEven);
        
        
	}
}
