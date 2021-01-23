import java.util.*;
public class SumOfNatNumber {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number till which you want to add the Natural Numbers: ");
        int number=sc.nextInt();
        int sum=0;
        for(int i=0;i<=number;i++)
        {
            sum=sum+number;
            i++;
        }
        System.out.println("The sum of the Natural Numbers till "+number+" is: "+sum);
        sc.close();

    }
    
}
