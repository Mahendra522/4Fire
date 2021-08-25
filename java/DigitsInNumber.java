// Java program to count total digits in a Number;
class DigitsInNumber{
    public static void main (String[] args) {
        int number = 12345, temp = 0;
        temp = number;
        int digitArray[] = new int[20];
        int count = 0;
        
        while(temp != 0){
            digitArray[count] = temp%10;
            temp = temp / 10;
            count++;
        }
        
        System.out.println("Total digits in Above Numbers: "+count);
        
    }
}
