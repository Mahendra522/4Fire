import java.util.Scanner;
public class DeleteAtIndex{
    public static void main(String[] args){
        int array[];
        array = new int[30];
        Scanner sc = new Scanner(System.in);
        int n = 0, position = 0, index = 0;
        int value = 0;
        
        System.out.println("Enter Number of elements you wanted to insert:  ");
        n = sc.nextInt();
        System.out.println();
        
        System.out.println("Enter each element one by one:  ");
        for (int i=0; i<n;  i++ ){
            array[i] = sc.nextInt();
        }
        System.out.println("Enter the position of element to be deleted:    ");
        position = sc.nextInt();
        System.out.println();
        
        for(int i = index; i<n; i++ ){
            array[i] = array[i+1];
        }
        System.out.println("Element Deleted Successfully!   ");
        System.out.println("List of all the element:    ");
        
        for(int i=0; i<n-1; i++){
            System.out.println(array[i]);
        }
        
        
        
        
    }
}