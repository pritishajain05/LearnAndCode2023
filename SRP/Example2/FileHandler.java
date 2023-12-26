import java.io.FileWriter;
import java.io.IOException;

public class FileHandler{
    public void saveAreaToFile(String fileName, String content) {
        try (FileWriter writer = new FileWriter(fileName)) {
            writer.write(content);
        } catch (IOException e) {
            System.err.println("Error writing to file: " + e.getMessage());
        }
    }
}
