// Java Program to reverse digits in the Number.
class ReverseDigit{
    void revNumber(int n){
        int temp = 0, count = 0;
        temp = n;
        int[] revArray = new int[20];
        while(temp != 0 ){
            revArray[count] = temp % 10;
            temp = temp / 10;
            count++;
        }
        for(int i=0; i<count; i++){
            System.out.print(revArray[i]+" ");
        }
    }
}
class ReverseDigitsInNumber{
    public static void main (String[] args) {
        int number = 12234556;
        ReverseDigit rd = new ReverseDigit();
        rd.revNumber(number);
    }
}
