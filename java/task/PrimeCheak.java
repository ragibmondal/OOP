import java.util.Scanner;


public class PrimeCheak {
    public static void main(String[] args){
     Scanner sc= new Scanner(System.in);
     int num=sc.nextInt();
     boolean isPrime=true;
     if(num<=1){
        isPrime=false;
     }
     for(int j=2;j<=Math.sqrt(num);j++){
        if(num%j==0){
            isPrime=false;
            break;
        }
     }
     if(isPrime){
        System.out.println( num+" is a prime number");
     }
     else{
        System.out.println(num+" is not a prime number");
     }
}
}
