import java.util.Scanner;

public class EYtestQuestion {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the text and character to be checked:");
        String data=in.nextLine();
        char check=in.next().trim().charAt(0);
        int result= count(data,check);
        System.out.println(result);
    }

    static int count(String data, char check) {
        int count=0;
        for(int i=0;i<data.length();i++){
            if(data.charAt(i)==check){
                count++;

            }
        }
        return count;

    }

}
