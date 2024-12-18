import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Auto> autok = new ArrayList<>();
        autok.add(new Porsche(50));
        autok.add(new Tesla());
        autok.add(new KonzolosAuto());
        autok.add(new Porsche(70));
        autok.add(new Tesla());

        for (Auto auto : autok) {
            auto.gyorsul();
            System.out.println("Sebesség: " + auto.getSebesseg() + " km/h");
        }

        Auto leggyorsabb = leggyorsabb(autok);
        System.out.println("A leggyorsabb autó sebessége: " + leggyorsabb.getSebesseg() + " km/h");
    }

    public static Auto leggyorsabb(List<Auto> lista) {
        Auto leggyorsabb = lista.get(0);
        for (Auto auto : lista) {
            if (auto.getSebesseg() > leggyorsabb.getSebesseg()) {
                leggyorsabb = auto;
            }
        }
        return leggyorsabb;
    }
}