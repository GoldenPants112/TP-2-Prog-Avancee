package Exo2;

public class FullDuration {
    private int jour=0;
    private int heure=0;
    private int minute=0;
    private int seconde=0;

    public FullDuration(int _jour, int _heure, int _minute, int _seonde){
        jour=_jour;
        heure=_heure;
        minute=_minute;
        seconde=_seonde;
    }
    public FullDuration(){
        jour=0;
        heure=0;
        minute=0;
        seconde=0;
    }
    public int convertSecDuration(){
        int result=0;
        result+= seconde + 60*minute + 3600*heure + 3600*24*jour;
        return result;
    }
    public int afficheJour(){
        return jour;
    }
    public int afficheHeure(){
        return heure;
    }
    public int afficheMinute(){
        return minute;
    }
    public int afficheSeocnde(){
        return seconde;
    }

    public FullDuration(SecDuration _duree){
        jour = _duree.affiche()/86400;
        heure = (_duree.affiche()-jour*86400)/3600;
        minute = (_duree.affiche()-(jour*86400 + heure*3600))/60;
        seconde = (_duree.affiche()-(jour*86400 + heure*3600 + minute*60));
    }

}
