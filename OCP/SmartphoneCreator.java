public class SmartphoneCreator implements DeviceCreator {
    @Override
    public DeviceDetails createDevice() {
        return new Smartphone();
    }
}
