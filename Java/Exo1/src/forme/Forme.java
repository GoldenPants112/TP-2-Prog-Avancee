package forme;

public class Forme {
    private  int f0;
    private int f1;
    private int f2;

    public  Forme(int _f0, int _f1, int _f2){
        f0=_f0;
        f1=_f1;
        f2=_f2;
    }
    public  Forme(){
        f0=0;
        f1=0;
        f2=0;
    }

    //calcule le coef en foncrion de f0,f1,f2
    public int compute(){
            return (int) (0.1*(f0+f1+f2-200));
        }
        public void Display_result(int _result){
            if(_result<=0) System.out.println (_result +".Donc votre condition physique est exellente" );
            else if(_result<5) System.out.println (_result +".Donc votre condition physique est tres bonne" );
            else if(_result<10) System.out.println (_result +".Donc votre condition physique est bonne" );
            else if(_result<15) System.out.println (_result +".Donc votre condition physique est moyenne") ;
            else System.out.println (_result +".Donc votre condition physique est faible" );
        }

        public void set_new_f(int _new_f0,int _new_f1,int _new_f2){
        f0=_new_f0;
        f1=_new_f1;
        f2=_new_f2;
        }
}
