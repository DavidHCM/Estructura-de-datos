
public enum Figura
{

    CORAZON("Corazon"), TREBOL("Trebol"), DIAMANTE("Diamante"), ESPADA("Espada");
    public final static int NUM_FIGURAS = 4;

    private final String nombreFigura;
    private Figura(String nombre)
    {
        this.nombreFigura = nombre;
    }
    public String toString()
    {
        return nombreFigura;
    }
}
