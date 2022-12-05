import java.util.Arrays;
import java.util.Scanner;

public class SelectionSort {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] nums=new int[6];
        System.out.println("Enter elements to be searched:");
        for(int i =0;i<nums.length;i++){
            nums[i]=in.nextInt();
        }
        System.out.println(Arrays.toString(selectionsort(nums)));
    }
//    Function to get main sorted array
//    You can also take void return type instead of int[] the choice is yours and up to your convenience
    public static int[] selectionsort(int[] nums){
//        For each loop
        for(int i=0;i<nums.length;i++){
//            TO search for the maximum element in the remaining array
            int lastindex= nums.length-i-1;
            int max= maxindex(nums,0,lastindex);
//            After finding the max element in remaining array and last index, Swap them
            swap(nums,max,lastindex);
        }
        return nums;
    }
//    Function to find the maximum element
    public static int maxindex(int[] arr,int start,int end){
        int max=start;
        for(int i=start;i<end;i++){
            if(arr[i]>max){
                max=i;
            }
        }
        return max;
    }
//    Function to swap to given elements:
    public static void swap(int[] arr,int num1,int num2){
        int temp=arr[num1];
        arr[num1]=arr[num2];
        arr[num2]=temp;

    }
}
