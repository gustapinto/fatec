public class ImplementaAviao {
    public static void main(String[] args) {
        Aviao aviao = new Aviao("747X", "Branco", "Jato", 112543);

        System.out.println(aviao.modelo);
        System.out.println(aviao.cor);
        System.out.println(aviao.tipo);
        System.out.println(aviao.numeroDeSerie);
    }
}
