//traversing all the elements of an array in Java Language.
import java.util.*;
class TraverseArray{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int array[];
        array = new int[30];
        int n = 0;
        System.out.println("Enter how many numbers you wanted to enter: ");
        n = sc.nextInt();
        System.out.println("Enter each element one by one: ");
        for(int i=0; i<n; i++){
            array[i] = sc.nextInt();
        }
        System.out.println("You have successfully entered all the Numbers.");
        System.out.println("Numbers entered are: ");
        for(int i=0; i<n; i++){
            System.out.println(array[i]);
        }
        System.out.println("---------------Exiting---------------");
        
    }
}