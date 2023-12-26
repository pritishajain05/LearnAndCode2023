
public class Main{
    public static void main(String[] args) {
        DeviceCreator smartphoneCreator = new SmartphoneCreator();
        DeviceCreator laptopCreator = new LaptopCreator();

        DeviceDetails smartphone = smartphoneCreator.createDevice();
        DeviceDetails laptop = laptopCreator.createDevice();

        smartphone.displayDetails();
        laptop.displayDetails();
    }
}

