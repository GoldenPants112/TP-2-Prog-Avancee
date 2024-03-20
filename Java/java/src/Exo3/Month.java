package Exo3;

public class Month {
    private int monthNumber;

    public Month(){};
    public int getMaxDay(int _monthNumber){
        int max_day=0;
        switch (_monthNumber) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                max_day = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                max_day = 30;
                break;
            case 2:
                max_day = 28;
                break;
        }
        return max_day;
    }

    public int displayDaysInMonth(int _decalage_de_caractere, int _jour_max) {
        int position = (_decalage_de_caractere/3)+1;

        //afficher les points en fonction du decalage de caracteres
        switch (_decalage_de_caractere) {
            case 3: System.out.print( " . ");
                break;
            case 6: System.out.print( " .  . ");
                break;
            case 9: System.out.print( " .  .  . ");
                break;
            case 12: System.out.print( " .  .  .  . ");
                break;
            case 15: System.out.print( " .  .  .  .  . ");
                break;
            case 18: System.out.print( " .  .  .  .  .  . ");
                break;
        }



        //afficher tous les jours du mois
        for (int j = 1; j <= _jour_max; j++) {

            //affiche les jours du mois avec le bon format (espace et saut a la ligne)
            //saut la ligne apres 7 elements ( . ou jours)
            if (position%7 == 0 && j>=10){
                System.out.print( j +"\n");
                _decalage_de_caractere =0;
                position=1;
            }
            else if (position%7 == 0 && j<10){
                System.out.print( " "+j +"\n");
                _decalage_de_caractere =0;
                position=1;
            }

            //affichage des jours. Different espace si le nombre a 2 chiffres ou 1 seul
            else if(j<10){
                System.out.print( " "+ j + " ");
                _decalage_de_caractere+=3;
                position+=1;
            }
            else if (j>=10){
                System.out.print( + j + " ");
                _decalage_de_caractere+=3;
                position+=1;
            }
        }
        return _decalage_de_caractere;
}

    public void displayMonth (int _month_number){
        monthNumber= _month_number;
        int jour_max ;
        switch (_month_number) {
            case 1:
                System.out.print( "       Janvier      " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;
            case 2:
                System.out.print( "       Fevrier      " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;
            case 3:
                System.out.print( "         Mars       " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;
            case 4:
                System.out.print( "        Avril        " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;
            case 5:
                System.out.print( "         Mai        " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;

            case 6:
                System.out.print( "        Juin        " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;

            case 7:
                System.out.print( "       Juillet      " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;

            case 8:
                System.out.print( "        Aout        " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;

            case 9:
                System.out.print( "     Septembre      " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;

            case 10:
                System.out.print( "       Octobre      " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;

            case 11:
                System.out.print( "       Novembre     " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;

            case 12:
                System.out.print( "       Decembre     " +"\n");
                System.out.print( "lu ma me je ve sa di" +"\n");
                break;
        }
    }
}
