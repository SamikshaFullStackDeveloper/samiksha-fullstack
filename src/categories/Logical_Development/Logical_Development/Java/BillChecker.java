import java.util.Scanner;

class EBill {
    public static void main (String[]args) {

        int x = 0;
        do {
            Billchecker bill = new Billchecker();
            bill.checkUnitRate();


        }
    }
}


class Billchecker {
    public void checkUnitRate(){
        Scanner number = new Scanner(System.in);

        System.out.println("Enter electrical unit:");
        int units = number.nextInt();
        int billAmount = 0;

        if (units <= 50) {
            billAmount = units * 7;

        } else if (units >= 51 || units <= 150) {
            billAmount = units * 8;

        } else if (units >= 151 || units <= 250) {
            billAmount = units * 12;

        } else if (units >= 250) {
            billAmount = units * 15;
        }

        int additionalCharge = (billAmount*20)/100;
        int total = additionalCharge + billAmount;
        System.out.println("The total amount:"+billAmount);
        System.out.println("The additional charge (20%):" +additionalCharge);
        System.out.println("The electrical bill amount is:" + total);
        number.close();
    }
}

