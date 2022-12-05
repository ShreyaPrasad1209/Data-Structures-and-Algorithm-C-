import java.util.Arrays;
import java.util.Scanner;

public class BubbleSort {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr=new int[6];
        System.out.println("Enter elements to the Array:");
        for(int i=0;i<arr.length;i++){
            arr[i]= in.nextInt();
        }
        int[] sortedarr=bubblesort(arr);
        System.out.println(Arrays.toString(sortedarr));
    }
//Function to perform Bubble Sort
    public static int[] bubblesort(int[] arr){
//        We initialise boolean swap in order to break the program in case of already sorted array is given
        boolean swap;
//        Run the passes for N-1 times
        for(int i=0;i<arr.length;i++){
            swap=false;
//            Since, after every pass, the max element is at the end of the array
//            For every pass, we perform J-i comparisons:
            for(int j=1;j<=arr.length-i-1;j++){  // You can anything <=arr.length-i (or) <arr.length-i
//                Compare and if the element J is smaller than J-1 element, Swap:
                if(arr[j]<arr[j-1]){
                    int temp= arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                    swap=true;
                }
            }
//            After we finish the 1st pass, we check to see if any elements were swapped if not it means it is a sorted array, so we use this loop to break the program.
//            if(swap==false){
//                break;
//            }
//            Simpler form of above:
            if(!swap){
                break;
            }
        }
        return arr;
    }
}
