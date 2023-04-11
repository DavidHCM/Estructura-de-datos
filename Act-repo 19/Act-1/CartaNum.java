public enum CartaNum
{
    AS("1"),SEGUNDO("2"),TERCERO("3"),CUARTO("4"),QUINTO("5"),SEXTO("6"),SEPTIMO("7"),REY("REY"),JOTO("JOTO"),QUEEN("QUEEN");

    private final String numCarta;
    public final static int VALORES = 13;

    private CartaNum(String num)
    {
        numCarta = num;
    }

    public String toString()
    {
        return numCarta;
    }
}
