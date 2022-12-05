import java.util.Scanner;

public class EY_IQ2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the eRP rating of given employee:");
        int eRP=in.nextInt();
        char ERG=calculateERG(eRP);
        System.out.println(ERG);

    }
    public static char calculateERG(int eRP){
        char ERG='a';
        if(eRP>=30 && eRP<=50){
            ERG='D';
            return ERG;
        }
        if(eRP>=51 && eRP<=60){
            ERG='C';
            return ERG;
        }
        if(eRP>=61 && eRP<=80){
            ERG='B';
            return ERG;
        }
        if(eRP>=81 && eRP<=100){
            ERG='A';
            return ERG;
        }

        return ERG;
    }
}
