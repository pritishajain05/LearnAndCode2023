public class LaptopCreator implements DeviceCreator {
    @Override
    public DeviceDetails createDevice() {
        return new Laptop();
    }
}
