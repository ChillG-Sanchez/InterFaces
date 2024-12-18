using System;

public class KonzolosAuto : IAuto
{
    private double sebesseg;

    public KonzolosAuto()
    {
        sebesseg = 0;
    }

    public void Gyorsul()
    {
        Console.Write("Mennyivel gyorsuljon a KonzolosAuto? ");
        if (double.TryParse(Console.ReadLine(), out double gyorsulas))
        {
            sebesseg += gyorsulas;
        }
        else
        {
            Console.WriteLine("Érvénytelen bemenet.");
        }
    }

    public double GetSebesseg()
    {
        return sebesseg;
    }
}