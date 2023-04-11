public class Maso {
    private Carta Baraja[][] = new Carta[Figura.NUM_FIGURAS][CartaNum.VALORES];

    public Maso()
    {
        for(int i = 0; i < CartaNum.VALORES; i++)
        {
            for(int j = 0; j < Figura.NUM_FIGURAS; j++)
            {
                Baraja[j][i] = new Carta(Figura.values()[j], CartaNum.values()[i]);
            }
        }
    }

    public Carta [] repartir(int numCartas)
    {

    }
}
