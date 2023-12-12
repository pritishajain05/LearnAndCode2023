public class DataCalculator {
    int integerInput;
    double decimalInput;
    String textInput;

    public void displayCalculatedSum(int firstOperand, int secondOperand) {
        int sum = firstOperand + secondOperand;
        System.out.println("Result: " + sum);
    }

    public void displayUppercaseString(String originalString) {
        String updatedString = sourceText.toUpperCase();
        System.out.println("Updated String: " + updatedString);
    }
}

public class Main {
    public static void main(String[] args) {
        DataCalculator calculator = new DataCalculator();
        calculator.integerInput= 10;
        calculator.decimalInput = 20.5;
        calculator.textInput= "hello";
        
        calculator.displayCalculatedSum(calculator.integerInput, 5);
        calculator.displayUppercaseString("world");
    }
}