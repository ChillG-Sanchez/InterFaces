public class Porsche : IAuto
{
    private double sebesseg;

    public Porsche(double sebesseg)
    {
        this.sebesseg = sebesseg;
    }

    public void Gyorsul()
    {
        sebesseg += 10;
    }

    public double GetSebesseg()
    {
        return sebesseg;
    }
}