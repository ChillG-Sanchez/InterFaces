import java.util.Scanner;

public class KonzolosAuto implements Auto {
    private double sebesseg;

    public KonzolosAuto() {
        sebesseg = 0;
    }

    @Override
    public void gyorsul() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Mennyivel gyorsuljon a KonzolosAuto? ");
        double gyorsulas = scanner.nextDouble();
        sebesseg += gyorsulas;
    }

    @Override
    public double getSebesseg() {
        return sebesseg;
    }
}