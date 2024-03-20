package Exo2;

public class SecDuration {
    private int second=0;

    public  SecDuration(int _seconde){
        second=_seconde;
    }
    public  SecDuration(){
        second=0;
    }

    public int affiche(){
        return second;
    }
    public SecDuration(int _jour, int _heure, int _minute, int _seconde){
        second += _jour * 86400;
        second += _heure *3600;
        second += _minute *60;
        second += _seconde;
    }

    public FullDuration convertFullDuration(){

        int j = second/86400;
        int h = (second-j*86400)/3600;
        int m = (second-(j*86400 + h*3600))/60;
        int s = (second-(j*86400 + h*3600 + m*60));
        Exo2.FullDuration dureeConverti= new FullDuration(j,h,m,s);
        return dureeConverti;

    }

    public void incrementation(){
        second++;
    }
    public void incrementation(int _inccrement){
        second+= _inccrement;
    }

    public void addSecDuration(SecDuration _duree){
        second+=_duree.affiche();
    }

    public void addFullDuration(FullDuration _duree){
        second += (_duree.afficheJour() * 86400);
        second += (_duree.afficheHeure() *3600);
        second += (_duree.afficheMinute() * 60);
        second += _duree.afficheSeocnde();
    };


}
