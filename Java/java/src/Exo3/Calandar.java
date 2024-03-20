package Exo3;

public class Calandar {
    public Calandar(){};

    public void display(){
        Exo3.Month mois = new Month();
        int premierJanvier=0;
        int decalagePremierDuMois=0;
        for (int i=1; i<13;i++){

            int jour_max = mois.getMaxDay(i);
            mois.displayMonth(i);

            if (i ==1 ){
                decalagePremierDuMois=mois.displayDaysInMonth(premierJanvier,jour_max);
            }
            else{
                decalagePremierDuMois =  mois.displayDaysInMonth(decalagePremierDuMois, jour_max);
            }

            System.out.println();
        }
    }

}
