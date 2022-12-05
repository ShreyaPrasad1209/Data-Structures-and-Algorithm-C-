import java.util.Scanner;

public class LSinRange {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter elements of the array and target to be searched:");
        int[] arr={1,2,3,4,5};
        int target=in.nextInt();

        int answer= linearsearch(arr,target,1,4);
        System.out.println(answer);
    }
    public static int linearsearch(int[] arr,int target,int start,int end){
        if(arr.length==0){
            return -1;

        }
        for(int i=start;i<=end;i++){
            if(arr[i]==target){
                return arr[i];
            }

        }
        return -1;
    }
}
