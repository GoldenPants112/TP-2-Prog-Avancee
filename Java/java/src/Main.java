import Exo1.forme.Forme;
import Exo2.*;


public abstract class Main {
    public static void main(String[] args) {

//        Exo1.forme.Forme forme1 = new Forme(50, 100, 130);
//        forme1.Display_result(forme1.compute());

        Exo2.SecDuration dureeSec = new SecDuration(90061);
        dureeSec.incrementation(4);
        Exo2.FullDuration dureeConverti = dureeSec.convertFullDuration();
        System.out.println(dureeConverti.afficheJour()+" jours " + dureeConverti.afficheHeure()+" heures "+ dureeConverti.afficheMinute()+" minutes "+ dureeConverti.afficheSeocnde()+" secondes ");

    }
}

