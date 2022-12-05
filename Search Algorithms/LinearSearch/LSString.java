import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class LSString {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a string:");
        String name=in.nextLine();
        char target='i';
        linearsearch(name,target);
        System.out.println(linearsearch(name,target));
//        Used var_name.tocharArray() to convert a string into array
        System.out.println(Arrays.toString(name.toCharArray()));
    }
    public static boolean linearsearch(String name,char target){
        if(name.length()==0){
            return false;

        }
        for(int i=0; i<name.length();i++){
            if(name.charAt(i)==target){
                return true;
            }
        }
        return false;
    }

}
