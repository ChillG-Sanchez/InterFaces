using System;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args)
    {
        List<IAuto> autok = new List<IAuto>
        {
            new Porsche(50),
            new Tesla(),
            new KonzolosAuto(),
            new Porsche(70),
            new Tesla()
        };

        foreach (var auto in autok)
        {
            auto.Gyorsul();
            Console.WriteLine($"Sebesség: {auto.GetSebesseg()} km/h");
        }

        var leggyorsabb = Leggyorsabb(autok);
        Console.WriteLine($"A leggyorsabb autó sebessége: {leggyorsabb.GetSebesseg()} km/h");
    }

    static IAuto Leggyorsabb(List<IAuto> lista)
    {
        IAuto leggyorsabb = lista[0];
        foreach (var auto in lista)
        {
            if (auto.GetSebesseg() > leggyorsabb.GetSebesseg())
            {
                leggyorsabb = auto;
            }
        }
        return leggyorsabb;
    }
}