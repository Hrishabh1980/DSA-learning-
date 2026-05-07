public class Main {
    public static void main(String[] args) {

        int n = 100;
        int count = 0;

        for(int i = 5; i <= n; i = i * 5){
            count = count + (n / i);
        }

        System.out.println("Trailing zeros in " + n + "! = " + count);
    }
}
