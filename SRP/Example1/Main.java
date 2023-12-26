public class Main {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5.0, 3.0);

        AreaCalculator areaCalculator = new AreaCalculator();
        double area = areaCalculator.calculateArea(rectangle);

        DisplayArea displayArea = new DisplayArea();
        displayArea.printArea(area);
    }
}