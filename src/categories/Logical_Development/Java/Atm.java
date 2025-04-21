
import java.util.Scanner;
 class atm {
     public static void main(String[] args) {
         Scanner number = new Scanner(System.in);
         int amount = 0;
         System.out.println("If you want deposite press d else if you want withdraw press w");
         String type = number.nextLine();

         if(type.equalsIgnoreCase("w")){
             System.out.println("enter you withdraw value");
             int withdraw=number.nextInt();

             if(amount >0 || amount==withdraw){
                 amount-=withdraw;
                 System.out.println("your remaining amount  balance is "+amount);

             }else if (amount>withdraw){
                 System.out.println("insuficient balance");
             }
         }else  if (type.equalsIgnoreCase("d")){

             System.out.println("enter your deposite  value");
             int deposite=number.nextInt();

             amount+=deposite;
             System.out.println("your account  balance is "+amount);


         }
         number.close();

     }
 }
