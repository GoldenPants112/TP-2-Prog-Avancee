import forme.Forme;

public abstract class Main {
    public static void main(String[] args) {

        forme.Forme forme1 = new Forme(50, 100, 130);
        forme1.Display_result(forme1.compute());
    }
}

