// Java program to printfirst n terms of Fibonacci Series.
class Fibonacci{
    int fibNumbers(int n){
        if (n == 0 || n == 1){
            return 1;
        }
        else{
            return fibNumbers(n-1)+fibNumbers(n-2);
        }
    }
}
class Main{
    public static void main (String[] args) {
        Fibonacci fib = new Fibonacci();
        int n = 5;
        for(int i=0; i<n; i++){
           System.out.println(fib.fibNumbers(i));    
        }
    }
}
