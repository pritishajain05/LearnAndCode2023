public class Main{
      public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5.0, 3.0);
        
        AreaCalculator areaCalculator = new AreaCalculator();
        double area = areaCalculator.calculateArea(rectangle);
        
        FileHandler fileHandler = new FileHandler();
        fileHandler.saveAreaToFile("area.txt","Area: "+ area);
        
        DisplayArea displayArea = new DisplayArea();
        displayArea.printArea(area);
    }
}