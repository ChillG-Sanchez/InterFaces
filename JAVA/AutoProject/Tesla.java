import java.util.Random;

public class Tesla implements Auto {
    private double sebesseg;
    private static Random random = new Random();

    public Tesla() {
        sebesseg = random.nextInt(61);
    }

    @Override
    public void gyorsul() {
        sebesseg += random.nextInt(11) + 5;
    }

    @Override
    public double getSebesseg() {
        return sebesseg;
    }
}