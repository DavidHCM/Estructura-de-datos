public class Carta
{
    private Figura fig;
    private CartaNum cNUM;

    public Carta(Figura figu, CartaNum num)
    {
        fig = figu;
        cNUM = num;
    }

    public String toString()
    {
        return "Figura: " + fig + ", Numero: " + cNUM;
    }
}
