package Exo2;

public class SecDuration {
    private int second=0;

    public void SecDuration(int _seconde){
        second=_seconde;
    }
    public void SecDuration(){
        second=0;
    }

    public int affiche(){
        return second;
    }
    public void SecDuration(int _jour, int _heure, int _minute, int _seconde){
        second += _jour * 86400;
        second += _heure *3600;
        second += _minute *60;
        second += _seconde;
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
        second += (_duree.affichejour() * 86400);
        second += (_duree.afficheheure() *3600);
        second += (_duree.afficheminute() * 60);
        second += _duree.afficheseconde();
    };


}
