/* package codechef; // don't place package name! */
// java program to check that the given number is prime or not.

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Numbers
{
    static String checkPrime(int n){
        String primeMsg = "Prime Number";
        String nonprimeMsg = "Non-Prime Number";
        for (int i=2; i<n; i++){
            if(n%i == 0){
                return nonprimeMsg;
            }
        }
            return primeMsg;
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		int n =  13;
		String result = "";
		result = checkPrime(n);
		System.out.println(n+" is "+result);
	}
}
