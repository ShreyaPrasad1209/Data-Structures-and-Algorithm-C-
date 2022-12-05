import java.util.Scanner;

public class LinearSearch {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the elements in Array and element to be searched:");
        int[] arr=new int[6];
        for(int i=0;i< arr.length;i++){
            arr[i]=in.nextInt();
        }
        int element=in.nextInt();
        int answer=linearsearch(arr,element);
        System.out.println(answer);
    }

    public static int linearsearch(int[] arr, int element) {
//        if the given array is empty
        if(arr.length==0){
            return -1;

        }
//        search each element
        for(int i=0;i<arr.length;i++){
            if(arr[i]==element){
                return arr[i];
            }
        }
//        if element not found
        return -1;
    }

}
