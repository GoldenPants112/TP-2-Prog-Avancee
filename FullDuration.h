class FullDuration{
protected:
    int jour;
    int heure;
    int minute;
    int second;
public:
    FullDuration(int _jour, int _heure,int minute, int second);
    FullDuration();

    //convertir en seconde
    int convert_SecDuration();
};