// Java Pragram to Insert n element at a particular Index
import java.util.Scanner;
class InsertAtIndex
{
  public static void main (String[]args)
  {
    int array[] = new int[30];
    int n = 0;
    int position = 0, index = 0, value = 0;
    Scanner sc = new Scanner (System.in);
      System.
      out.print
      ("Enter total number of elements to be entered in the Array: ");
      n = sc.nextInt ();
      System.out.println ();
      System.out.println ("Enter each element one by one: ");
    for (int i = 0; i < n; i++)
      {
	array[i] = sc.nextInt ();
      }

    System.out.print ("Enter the position of element to be inserted:   ");
    position = sc.nextInt ();

    index = position - 1;
    System.out.print ("Enter the value to be inserted: ");
    value = sc.nextInt ();
    System.out.println ();

    for (int i = n - 1; i >= index; i--)
      {
	array[i + 1] = array[i];
      }
    array[index] = value;
    System.out.println ("Value is entered successfully!");
    System.out.println ("List of all elements in the Array:  ");
    if (index < n)
      {
	for (int i = 0; i < n + 1; i++)
	  {
	    System.out.println (array[i]);
	  }
      }
    else
      {
	for (int i = 0; i < index + 1; i++)
	  {
	    System.out.println (array[i]);
	  }
      }



  }
}
