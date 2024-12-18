using System;

public class Tesla : IAuto
{
    private double sebesseg;
    private static Random random = new Random();

    public Tesla()
    {
        sebesseg = random.Next(0, 61);
    }

    public void Gyorsul()
    {
        sebesseg += random.Next(5, 16);
    }

    public double GetSebesseg()
    {
        return sebesseg;
    }
}