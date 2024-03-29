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

    public SecDuration convertSecDuration(){
        Exo2.SecDuration dureeConverti = new SecDuration(jour*3600*24+heure*3600+minute*60+seconde);
        return dureeConverti;
    }

    public void incrementJour(){
        jour++;
    }
    public void incrementHeure(){
        heure++;
    }
    public void incrementMinute(){
        minute++;
    }
    public void incrementSeconde(){
        seconde++;
    }

    public void incrementJour(int _increment){
        jour+= _increment;
    }
    public void incrementHeure(int _increment){
        heure+=_increment;
    }
    public void incrementMinute(int _increment){
        minute+=_increment;
    }
    public void incrementSeconde(int _increment){
        seconde+=_increment;
    }

    public void normalise(){
        while (seconde >= 60) {
            seconde -= 60;
            minute++;
        }
        while (minute >= 60) {
            minute -= 60;
            heure++;
        }
        while (heure >= 24) {
            heure -= 24;
            jour++;
        }
    }
}
