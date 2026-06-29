class PaymentProcessor
{
    // Method 1
    void processPayment(double amount)
    {
        System.out.println("Payment without coupon");
        System.out.println("Final Amount : " + amount);
    }

    // Method 2 (Overloaded)
    void processPayment(double amount, String coupon)
    {
        double finalAmount = amount - 100;

        System.out.println("Payment with coupon : " + coupon);
        System.out.println("Final Amount : " + finalAmount);
    }
}

public class Main
{
    public static void main(String args[])
    {
        PaymentProcessor p = new PaymentProcessor();

        p.processPayment(1000);

        p.processPayment(1000, "SAVE100");
    }
}
