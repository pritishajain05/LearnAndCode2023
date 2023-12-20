public class DataCalculator {
    int firstNumber;
    double secondNumber;
    String textInput;

    public void displayCalculatedSum(int firstOperand, int secondOperand) {
        int sum = firstOperand + secondOperand;
        System.out.println("Result: " + sum);
    }

    public void displayUppercaseString(String sourceText) {
        textInput = sourceText.toUpperCase();
        System.out.println("Updated String: " + textInput);
    }
}

public class Main {
    public static void main(String[] args) {
        DataCalculator calculator = new DataCalculator();
        calculator.firstNumber= 10;
        calculator.secondNumber = 20.5;
        calculator.textInput= "hello";
        
        calculator.displayCalculatedSum(calculator.firstNumber, 5);
        calculator.displayUppercaseString("world");
    }
}